//
// Created by boy on 26.07.18.
//

#include "Field.h"
#include "MoveType.h"


/* if player is trying to move block in any side and it causes collisions
    method will return true, on other hand it will return false;
 */
bool Field::checkCollisions(int movex = 0,int movey = 0,int turnTo = 0){
    bool canMove = true;
    int i = static_cast<int>(block->getBlockType());
    DirectionType tmp = block->getDirectionType();
    if (turnTo == 1) ++tmp;
    if (turnTo == -1) --tmp;
    int j = static_cast<int>(tmp);
    for (int k = 0;k < 4 && canMove;k++){
        int x = block->getBlockMainCoordinate().getx() + movex + block->getBlockCoordinate(i,j,k).getx();
        int y = block->getBlockMainCoordinate().gety() + movey + block->getBlockCoordinate(i,j,k).gety();
        if ((y >= HEIGH || x >= WIDTH || x < 0)  ||
            ((x >= 0 && y >= 0 && y <= HEIGH && x <= WIDTH && field[x][y])))
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
void Field::moveBlock(MoveType type) {
    int movex = 0;
    int movey = 0;
    offset(movex,movey,type);
    if (checkCollisions(movex,movey))
        block->getBlockMainCoordinate().addOffset(movex,movey);
}

void Field::TurnBlock(int turnTo) {
    if (checkCollisions(0,0,turnTo)) {
        DirectionType tmp = block->getDirectionType();
        ++tmp;
        block->setDirectionType(tmp);
    }
}

Field::Field() {
    block = new Block(BlockType::line);
    for (auto &i : field) {
        for (int &j : i) {
            j = 0;
        }
    }
}

Field::~Field() {
    delete block;
}

void Field::changeField() {

}

Block *Field::getBlock(){
    return block;
}
