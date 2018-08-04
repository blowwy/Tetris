//
// Created by boy on 27.07.18.
//

#include <printf.h>
#include "Block.h"

void initialization(int x0, int y0, int x1, int y1,
        int x2 , int y2, int x3, int y3,Coordinates * coords){
    coords[0].changeCoordinates(x0,y0);
    coords[1].changeCoordinates(x1,y1);
    coords[2].changeCoordinates(x2,y2);
    coords[3].changeCoordinates(x3,y3);
}

Block::Block(BlockType type) {
    coords = new Coordinates[4];
    switch (type){
        case BlockType::SQUARE :
        {
            initialization(4,0,5,0,4,1,5,1,coords);
            break;
        }
        case BlockType::STRAIGHT :
        {
            initialization(3,0,4,0,5,0,6,0,coords);
            break;
        }
        case BlockType::LSHAPED :
        {
            initialization(3,0,3,1,4,1,5,1,coords);
            break;
        }
        case BlockType::ZSHAPED :
        {
            initialization(4,0,4,1,5,0,3,1,coords);
            break;
        }

    }
}

Coordinates* Block::getCoords() const{
    return coords;
}

bool& Block::getCollision() {
    return collision;
}

bool Block::getCollision() const {
    return collision;
}

Block::~Block() {
    delete [] coords;
}