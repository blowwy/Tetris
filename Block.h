//
// Created by boy on 27.07.18.
//

#ifndef UNTITLED_BLOCK_H
#define UNTITLED_BLOCK_H


#include "Coordinates.h"
#include "BlockType.h"
#include "MoveType.h"
#include "DirectionType.h"
#include "ColorType.h"

int const DIRECTIONS_NUM = 7;
int const TYPES_NUM = 4;
int const PIECES_NUM = 4;

class Block {

public:
    explicit Block(BlockType type,ColorType cType);
    BlockType getType() const;
    ColorType getColorType() const;
    DirectionType getDirectionType() const;
    Coordinates & getMainCoordinate();
    Coordinates & getCoordinate(int i, int j, int k);
    void setDirectionType(DirectionType dirType);
    ~Block();
private:
    BlockType blockType;
    DirectionType directionType;
    ColorType color;
    Coordinates *mainCoord;
    Coordinates *blockCoords[DIRECTIONS_NUM][TYPES_NUM][PIECES_NUM]; //type|derction|block
};

#endif //UNTITLED_BLOCK_H
