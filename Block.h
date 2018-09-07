//
// Created by boy on 27.07.18.
//

#ifndef UNTITLED_BLOCK_H
#define UNTITLED_BLOCK_H


#include "Coordinates.h"
#include "BlockType.h"
#include "MoveType.h"

class Block {

public:
    Block(BlockType type);
    Coordinates * getCoords() const;
    bool & getCollision();
    bool getCollision() const;
    ~Block();
private:
    Coordinates *coords;
    bool collision = false;
};


#endif //UNTITLED_BLOCK_H
