//
// Created by boy on 26.07.18.
//

#include "Field.h"
#include "MoveType.h"

void Field::moveBlock(MoveType type) {
    int movex = 0;
    int movey = 0;
    if (type == MoveType::DOWN) movey = 1;
    else if (type == MoveType::LEFT) movex = -1;
    else movex = 1;
    bool canMove = true;
    for (int i = 0;i < 4;i++){
        int y = block->getCoords()[i].gety() + movey;
        int x = block->getCoords()[i].getx() + movex;
        if (y >= HEIGH) || (x >= WIDTH) || (x < 0) || (field[y][x]) {
            canMove = false;
            if (y) {
                block->getCollision() = true;
            }
        }   
    }
    if (!canMove) return;
    for (int i = 0;i < 4;i++){
        block->getCoords()[i].gety() += movey;
        block->getCoords()[i].getx() += movex;
    }
}