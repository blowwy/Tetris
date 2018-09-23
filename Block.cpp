//
// Created by boy on 27.07.18.
//

#include "Block.h"

Block::Block(BlockType bType,ColorType cType) : blockType(bType),directionType(DirectionType::north)
        ,mainCoord(Coordinates(5,-3)),color(cType){
    blockCoords[0][0][0] = Coordinates(0,0);
    blockCoords[0][0][1] = Coordinates(0,1);
    blockCoords[0][0][2] = Coordinates(0,2);
    blockCoords[0][0][3] = Coordinates(-1,2);
    blockCoords[0][1][0] = Coordinates(0,2);
    blockCoords[0][1][1] = Coordinates(-1,2);
    blockCoords[0][1][2] = Coordinates(-2,2);
    blockCoords[0][1][3] = Coordinates(-2,1);
    blockCoords[0][2][0] = Coordinates(0,0);
    blockCoords[0][2][1] = Coordinates(-1,0);
    blockCoords[0][2][2] = Coordinates(-1,1);
    blockCoords[0][2][3] = Coordinates(-1,2);
    blockCoords[0][3][0] = Coordinates(0,1);
    blockCoords[0][3][1] = Coordinates(0,2);
    blockCoords[0][3][2] = Coordinates(-1,1);
    blockCoords[0][3][3] = Coordinates(-2,1);
    blockCoords[1][0][0] = Coordinates(-1,0);
    blockCoords[1][0][1] = Coordinates(-1,1);
    blockCoords[1][0][2] = Coordinates(-1,2);
    blockCoords[1][0][3] = Coordinates(0,2);
    blockCoords[1][1][0] = Coordinates(0,1);
    blockCoords[1][1][1] = Coordinates(0,2);
    blockCoords[1][1][2] = Coordinates(1,1);
    blockCoords[1][1][3] = Coordinates(2,1);
    blockCoords[1][2][0] = Coordinates(0,0);
    blockCoords[1][2][1] = Coordinates(0,1);
    blockCoords[1][2][2] = Coordinates(0,2);
    blockCoords[1][2][3] = Coordinates(-1,0);
    blockCoords[1][3][0] = Coordinates(0,1);
    blockCoords[1][3][1] = Coordinates(0,2);
    blockCoords[1][3][2] = Coordinates(-1,2);
    blockCoords[1][3][3] = Coordinates(-2,2);
    blockCoords[2][0][0] = Coordinates(0,0);
    blockCoords[2][0][1] = Coordinates(0,1);
    blockCoords[2][0][2] = Coordinates(0,2);
    blockCoords[2][0][3] = Coordinates(0,3);
    blockCoords[2][1][0] = Coordinates(-1,0);
    blockCoords[2][1][1] = Coordinates(0,0);
    blockCoords[2][1][2] = Coordinates(1,0);
    blockCoords[2][1][3] = Coordinates(2,0);
    blockCoords[2][2][0] = Coordinates(0,0);
    blockCoords[2][2][1] = Coordinates(0,1);
    blockCoords[2][2][2] = Coordinates(0,2);
    blockCoords[2][2][3] = Coordinates(0,3);
    blockCoords[2][3][0] = Coordinates(-1,0);
    blockCoords[2][3][1] = Coordinates(0,0);
    blockCoords[2][3][2] = Coordinates(1,0);
    blockCoords[2][3][3] = Coordinates(2,0);
    blockCoords[3][0][0] = Coordinates(0,0);
    blockCoords[3][0][1] = Coordinates(-1,0);
    blockCoords[3][0][2] = Coordinates(0,1);
    blockCoords[3][0][3] = Coordinates(-1,1);
    blockCoords[3][1][0] = Coordinates(0,0);
    blockCoords[3][1][1] = Coordinates(-1,0);
    blockCoords[3][1][2] = Coordinates(0,1);
    blockCoords[3][1][3] = Coordinates(-1,1);
    blockCoords[3][2][0] = Coordinates(0,0);
    blockCoords[3][2][1] = Coordinates(-1,0);
    blockCoords[3][2][2] = Coordinates(0,1);
    blockCoords[3][2][3] = Coordinates(-1,1);
    blockCoords[3][3][0] = Coordinates(0,0);
    blockCoords[3][3][1] = Coordinates(-1,0);
    blockCoords[3][3][2] = Coordinates(0,1);
    blockCoords[3][3][3] = Coordinates(-1,1);
    blockCoords[4][0][0] = Coordinates(0,0);
    blockCoords[4][0][1] = Coordinates(1,0);
    blockCoords[4][0][2] = Coordinates(0,1);
    blockCoords[4][0][3] = Coordinates(-1,1);
    blockCoords[4][1][0] = Coordinates(-1,0);
    blockCoords[4][1][1] = Coordinates(-1,1);
    blockCoords[4][1][2] = Coordinates(0,1);
    blockCoords[4][1][3] = Coordinates(0,2);
    blockCoords[4][2][0] = Coordinates(0,0);
    blockCoords[4][2][1] = Coordinates(1,0);
    blockCoords[4][2][2] = Coordinates(0,1);
    blockCoords[4][2][3] = Coordinates(-1,1);
    blockCoords[4][3][0] = Coordinates(-1,0);
    blockCoords[4][3][1] = Coordinates(-1,1);
    blockCoords[4][3][2] = Coordinates(0,1);
    blockCoords[4][3][3] = Coordinates(0,2);
    blockCoords[5][0][0] = Coordinates(0,0);
    blockCoords[5][0][1] = Coordinates(-1,0);
    blockCoords[5][0][2] = Coordinates(0,1);
    blockCoords[5][0][3] = Coordinates(1,1);
    blockCoords[5][1][0] = Coordinates(0,0);
    blockCoords[5][1][1] = Coordinates(0,1);
    blockCoords[5][1][2] = Coordinates(-1,1);
    blockCoords[5][1][3] = Coordinates(-1,2);
    blockCoords[5][2][0] = Coordinates(0,0);
    blockCoords[5][2][1] = Coordinates(-1,0);
    blockCoords[5][2][2] = Coordinates(0,1);
    blockCoords[5][2][3] = Coordinates(1,1);
    blockCoords[5][3][0] = Coordinates(0,0);
    blockCoords[5][3][1] = Coordinates(0,1);
    blockCoords[5][3][2] = Coordinates(-1,1);
    blockCoords[5][3][3] = Coordinates(-1,2);
    blockCoords[6][0][0] = Coordinates(0,0);
    blockCoords[6][0][1] = Coordinates(0,1);
    blockCoords[6][0][2] = Coordinates(-1,1);
    blockCoords[6][0][3] = Coordinates(1,1);
    blockCoords[6][1][0] = Coordinates(0,0);
    blockCoords[6][1][1] = Coordinates(0,1);
    blockCoords[6][1][2] = Coordinates(0,2);
    blockCoords[6][1][3] = Coordinates(1,1);
    blockCoords[6][2][0] = Coordinates(-1,0);
    blockCoords[6][2][1] = Coordinates(0,0);
    blockCoords[6][2][2] = Coordinates(1,0);
    blockCoords[6][2][3] = Coordinates(0,1);
    blockCoords[6][3][0] = Coordinates(0,0);
    blockCoords[6][3][1] = Coordinates(0,1);
    blockCoords[6][3][2] = Coordinates(0,2);
    blockCoords[6][3][3] = Coordinates(-1,1);

}


BlockType Block::getType() const{
    return blockType;
}

ColorType Block::getColorType() const {
    return color;
}

DirectionType Block::getDirectionType() const{
    return directionType;
}

Coordinates &Block::getMainCoordinate(){
    return mainCoord;
}

const Coordinates &Block::getCoordinate(int i, int j, int k) const{
    return blockCoords[i][j][k];
}

void Block::setDirectionType(DirectionType dirType) {
    directionType = dirType;
}
