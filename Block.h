//
// Created by boy on 27.07.18.
//

#ifndef UNTITLED_BLOCK_H
#define UNTITLED_BLOCK_H


#include "Coordinates.h"
#include "BlockType.h"
#include "MoveType.h"
#include "DirectionType.h"

class Block {

public:
    explicit Block(BlockType type);
    BlockType getBlockType() ;
    void setDirectionType(DirectionType dirType);
    DirectionType getDirectionType() ;
    Coordinates & getBlockMainCoordinate();
    Coordinates & getBlockCoordinate(int i,int j,int k);
    ~Block();
private:
    Coordinates *blockCoords[7][4][4];  //type|derction|block
    BlockType blockType;
    DirectionType directionType;
    Coordinates *mainCoord;
};

#endif //UNTITLED_BLOCK_H
