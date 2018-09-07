//
// Created by boy on 26.07.18.
//

#include "Field.h"
#include "MoveType.h"


/* if player is trying to move block in any side and it causes collisions
    method will return true, on other hand it will return false;
 */
void checkCollisions(int movex,int movey){
    bool canMove = true;
    for (int i = 0;i < 4;i++){
        int y = block->getCoords()[i].gety() + movey;
        int x = block->getCoords()[i].getx() + movex;
        if ((y >= HEIGH) || (x >= WIDTH) || (x < 0) || (field[y][x])) {
            canMove = false;
            if (movey) {
                block->getCollision() = true;
            }
        }
    }
    return canMove;
}

/*  calculation offset of both sides when trying to move block
    move right -> x = 1, move left -> x = -1,move down -> y = 1;
  */
void offset(int & movex,int & movey){
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
    offset(movex,movey);
    bool canMove = checkCollisions(movex,movey);
    if (!canMove)
        if (block->getCollision()){

        }
            //to-do запоминаем текущий блок на поле и скидываем следующий
    for (int i = 0;i < 4;i++){
        block->getCoords()[i].gety() += movey;
        block->getCoords()[i].getx() += movex;
    }
}

void Field::TurnBlock() {

}