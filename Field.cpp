//
// Created by boy on 26.07.18.
//

#include "Field.h"
#include "MoveType.h"
#include "ColorType.h"


void Field::getBlockTypeNDirection(int &i, int &j, int turn = 0) const{
    i = static_cast<int>(getBlock()->getType());
    DirectionType tmp = getBlock()->getDirectionType();
    if (turn == 1) ++tmp;
    if (turn == -1) --tmp;
    j = static_cast<int>(tmp);
}

void Field::getBlockXY(int &x, int &y, int movex, int movey,int i,int j,int k) const{
    x = getBlock()->getMainCoordinate().getx() + movex + getBlock()->getCoordinate(i, j, k).getx();
    y = getBlock()->getMainCoordinate().gety() + movey + getBlock()->getCoordinate(i, j, k).gety();
}


/* if player is trying to move block in any side and it causes collisions
    method will return true, on other hand it will return false;
 */

bool Field::checkCollisions(int movex = 0,int movey = 0,int turnTo = 0) const{
    bool canMove = true;
    int i = 0;
    int j = 0;
    getBlockTypeNDirection(i, j, turnTo);
    for (int k = 0;k < PIECES_NUM && canMove;k++){
        int x = 0;
        int y = 0;
        getBlockXY(x,y,movex,movey,i,j,k);
        if ((!isPieceInside(x,y) && y >= 0) ||
            (isPieceInside(x,y) && field[y][x] != ColorType::inv))
                canMove = false;
    }
    return canMove;
}

/*  calculation offset of both sides when trying to move block
    move right -> x = 1, move left -> x = -1,move down -> y = 1;
  */
void Field::offset(int & movex,int & movey,MoveType type) const{
    if (type == MoveType::DOWN) movey = 1;
    else if (type == MoveType::LEFT) movex = -1;
    else movex = 1;
}

/*
    move block to side wich user wants on his field
*/
int Field::moveBlock(MoveType type){
    int gamestatus = 0;
    int movex = 0;
    int movey = 0;
    offset(movex,movey,type);
    if (checkCollisions(movex,movey)) {
        block->getMainCoordinate().addOffset(movex, movey);
    }
    else if (type == MoveType::DOWN){
        gamestatus = fixBlock();
        delete block;
        block = new Block(randomBlockType(),randomColorType());
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
    field = new ColorType * [HEIGH];
    for (int i = 0;i < HEIGH;i++)
        field[i] = new ColorType [WIDTH];
    block = new Block(randomBlockType(),randomColorType());
    for (int i = 0;i < HEIGH;i++){
        for (int j = 0;j < WIDTH;j++){
            field[i][j] = ColorType::inv;
        }
    }
}

Field::~Field() {
    delete block;
    for (int i = 0;i < HEIGH;i++)
        delete [] field[i];
    delete [] field;
}

Block *Field::getBlock() const{
    return block;
}

ColorType Field::getCellColour(int x, int y) const{
    return field[x][y];
}

void Field::deleteLine(int y) {
    for (int i = y;i > 0;i--)
        std::swap(field[i],field[i - 1]);
}

int Field::deleteCompletedLines(){
    int i = HEIGH - 1;
    while (i >= 0) {
        int count = 0;
        for (int j = 0; j < WIDTH; j++) {
            if (field[i][j] != ColorType::inv)
                count++;
        }
        if (count == WIDTH) {
            for (int j = 0; j < WIDTH; j++) {
                field[i][j] = ColorType::inv;
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

int Field::fixBlock(){
    int i = 0;
    int j = 0;
    getBlockTypeNDirection(i, j, 0);
    for (int k = 0; k < PIECES_NUM; k++) {
        int x = 0;
        int y = 0;
        getBlockXY(x, y, 0, 0, i, j, k);
        if (isPieceInside(x,y))
            field[y][x] = getBlock()->getColorType();
    }
    return deleteCompletedLines();
}

bool Field::isPieceInside(int x, int y) const {
    return y < HEIGH && x < WIDTH && x >= 0 && y >= 0;
}
