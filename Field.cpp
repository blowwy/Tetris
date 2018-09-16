//
// Created by boy on 26.07.18.
//

#include "Field.h"
#include "MoveType.h"


void Field::getTypeNDirection(int & i,int & j,int turn = 0){
    i = static_cast<int>(getBlock()->getBlockType());
    DirectionType tmp = getBlock()->getDirectionType();
    if (turn == 1) ++tmp;
    if (turn == -1) --tmp;
    j = static_cast<int>(tmp);
}

void Field::getBlockXY(int &x, int &y, int movex, int movey,int i,int j,int k) {
    x = getBlock()->getBlockMainCoordinate().getx() + movex + getBlock()->getBlockCoordinate(i,j,k).getx();
    y = getBlock()->getBlockMainCoordinate().gety() + movey + getBlock()->getBlockCoordinate(i,j,k).gety();
}


/* if player is trying to move block in any side and it causes collisions
    method will return true, on other hand it will return false;
 */

bool Field::checkCollisions(int movex = 0,int movey = 0,int turnTo = 0){
    bool canMove = true;
    int i = 0;
    int j = 0;
    getTypeNDirection(i,j,turnTo);
    for (int k = 0;k < 4 && canMove;k++){
        int x = 0;
        int y = 0;
        getBlockXY(x,y,movex,movey,i,j,k);
        if ((y >= HEIGH || x >= WIDTH || x < 0)  ||
            ((x >= 0 && y >= 0 && y <= HEIGH && x <= WIDTH && field[y][x])))
                canMove = false;
    }
    return canMove;
}

/*  calculation offset of both sides when trying to move block
    move right -> x = 1, move left -> x = -1,move down -> y = 1;
  */
void Field::offset(int & movex,int & movey,MoveType type){
    if (type == MoveType::DOWN) movey = 1;
    else if (type == MoveType::LEFT) movex = -1;
    else movex = 1;
}

/*
    move block to side wich user wants on his field
*/
int Field::moveBlock(MoveType type) {
    int gamestatus = 0;
    int movex = 0;
    int movey = 0;
    offset(movex,movey,type);
    if (checkCollisions(movex,movey)) {
        block->getBlockMainCoordinate().addOffset(movex, movey);
    }
    else if (type == MoveType::DOWN){
        gamestatus = fixBlock();
        delete block;
        block = new Block(randomBlockType());
    }
    return gamestatus;
}

void Field::TurnBlock(int turnTo) {
    if (checkCollisions(0,0,turnTo)) {
        DirectionType tmp = block->getDirectionType();
        turnTo == 1 ? ++tmp : --tmp;
        block->setDirectionType(tmp);
    }
}

Field::Field() {
    field = new int * [HEIGH];
    for (int i = 0;i < HEIGH;i++)
        field[i] = new int [WIDTH];
    block = new Block(randomBlockType());
    for (int i = 0;i < HEIGH;i++){
        for (int j = 0;j < WIDTH;j++){
            field[i][j] = 0;
        }
    }
}

Field::~Field() {
    delete block;
    for (int i = 0;i < HEIGH;i++)
        delete [] field[i];
    delete [] field;
}

Block *Field::getBlock(){
    return block;
}

int Field::getCellColour(int x, int y) {
    return field[x][y];
}

void Field::deleteLine(int y) {
    for (int i = y;i > 0;i--)
        std::swap(field[i],field[i - 1]);

}


int Field::fixBlock() {
    int i = 0;
    int j = 0;
    getTypeNDirection(i, j, 0);
    for (int k = 0; k < 4; k++) {
        int x = 0;
        int y = 0;
        getBlockXY(x, y, 0, 0, i, j, k);
        if (y < HEIGH && x < WIDTH && x >= 0 && y >= 0)
            field[y][x] = 1;
    }
    i = HEIGH - 1;
    while (i >= 0) {
        int count = 0;
        for (j = 0; j < WIDTH; j++) {
            if (field[i][j])
                count++;
        }
        if (count == WIDTH) {
            for (j = 0; j < WIDTH; j++) {
                field[i][j] = 0;
            }
            deleteLine(i);
        }
        else {
            if (i == 0 && count)
                return 1;
            i--;
        }
    }
    return 0;
}
