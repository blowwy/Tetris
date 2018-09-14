//
// Created by boy on 27.07.18.
//

#include "Block.h"

Block::Block(BlockType type) : blockType(type),directionType(DirectionType::north)
                    ,mainCoord(new Coordinates(5,-3)){
    blockCoords[0][0][0] = new Coordinates(0,0);
    blockCoords[0][0][1] = new Coordinates(0,1);
    blockCoords[0][0][2] = new Coordinates(0,2);
    blockCoords[0][0][3] = new Coordinates(-1,2);
    blockCoords[0][1][0] = new Coordinates(0,2);
    blockCoords[0][1][1] = new Coordinates(-1,2);
    blockCoords[0][1][2] = new Coordinates(-2,2);
    blockCoords[0][1][3] = new Coordinates(-2,1);
    blockCoords[0][2][0] = new Coordinates(0,0);
    blockCoords[0][2][1] = new Coordinates(-1,0);
    blockCoords[0][2][2] = new Coordinates(-1,1);
    blockCoords[0][2][3] = new Coordinates(-1,2);
    blockCoords[0][3][0] = new Coordinates(0,1);
    blockCoords[0][3][1] = new Coordinates(0,2);
    blockCoords[0][3][2] = new Coordinates(-1,1);
    blockCoords[0][3][3] = new Coordinates(-2,1);
    blockCoords[1][0][0] = new Coordinates(-1,0);
    blockCoords[1][0][1] = new Coordinates(-1,1);
    blockCoords[1][0][2] = new Coordinates(-1,2);
    blockCoords[1][0][3] = new Coordinates(0,2);
    blockCoords[1][1][0] = new Coordinates(0,1);
    blockCoords[1][1][1] = new Coordinates(0,2);
    blockCoords[1][1][2] = new Coordinates(1,1);
    blockCoords[1][1][3] = new Coordinates(2,1);
    blockCoords[1][2][0] = new Coordinates(0,0);
    blockCoords[1][2][1] = new Coordinates(0,1);
    blockCoords[1][2][2] = new Coordinates(0,2);
    blockCoords[1][2][3] = new Coordinates(-1,0);
    blockCoords[1][3][0] = new Coordinates(0,1);
    blockCoords[1][3][1] = new Coordinates(0,2);
    blockCoords[1][3][2] = new Coordinates(-1,2);
    blockCoords[1][3][3] = new Coordinates(-2,2);
    blockCoords[2][0][0] = new Coordinates(0,0);
    blockCoords[2][0][1] = new Coordinates(0,1);
    blockCoords[2][0][2] = new Coordinates(0,2);
    blockCoords[2][0][3] = new Coordinates(0,3);
    blockCoords[2][1][0] = new Coordinates(-1,0);
    blockCoords[2][1][1] = new Coordinates(0,0);
    blockCoords[2][1][2] = new Coordinates(1,0);
    blockCoords[2][1][3] = new Coordinates(2,0);
    blockCoords[2][2][0] = new Coordinates(0,0);
    blockCoords[2][2][1] = new Coordinates(0,1);
    blockCoords[2][2][2] = new Coordinates(0,2);
    blockCoords[2][2][3] = new Coordinates(0,3);
    blockCoords[2][3][0] = new Coordinates(-1,0);
    blockCoords[2][3][1] = new Coordinates(0,0);
    blockCoords[2][3][2] = new Coordinates(1,0);
    blockCoords[2][3][3] = new Coordinates(2,0);
    blockCoords[3][0][0] = new Coordinates(0,0);
    blockCoords[3][0][1] = new Coordinates(-1,0);
    blockCoords[3][0][2] = new Coordinates(0,1);
    blockCoords[3][0][3] = new Coordinates(-1,1);
    blockCoords[3][1][0] = new Coordinates(0,0);
    blockCoords[3][1][1] = new Coordinates(-1,0);
    blockCoords[3][1][2] = new Coordinates(0,1);
    blockCoords[3][1][3] = new Coordinates(-1,1);
    blockCoords[3][2][0] = new Coordinates(0,0);
    blockCoords[3][2][1] = new Coordinates(-1,0);
    blockCoords[3][2][2] = new Coordinates(0,1);
    blockCoords[3][2][3] = new Coordinates(-1,1);
    blockCoords[3][3][0] = new Coordinates(0,0);
    blockCoords[3][3][1] = new Coordinates(-1,0);
    blockCoords[3][3][2] = new Coordinates(0,1);
    blockCoords[3][3][3] = new Coordinates(-1,1);
    blockCoords[4][0][0] = new Coordinates(0,0);
    blockCoords[4][0][1] = new Coordinates(1,0);
    blockCoords[4][0][2] = new Coordinates(0,1);
    blockCoords[4][0][3] = new Coordinates(-1,1);
    blockCoords[4][1][0] = new Coordinates(-1,0);
    blockCoords[4][1][1] = new Coordinates(-1,1);
    blockCoords[4][1][2] = new Coordinates(0,1);
    blockCoords[4][1][3] = new Coordinates(0,2);
    blockCoords[4][2][0] = new Coordinates(0,0);
    blockCoords[4][2][1] = new Coordinates(1,0);
    blockCoords[4][2][2] = new Coordinates(0,1);
    blockCoords[4][2][3] = new Coordinates(-1,1);
    blockCoords[4][3][0] = new Coordinates(-1,0);
    blockCoords[4][3][1] = new Coordinates(-1,1);
    blockCoords[4][3][2] = new Coordinates(0,1);
    blockCoords[4][3][3] = new Coordinates(0,2);
    blockCoords[5][0][0] = new Coordinates(0,0);
    blockCoords[5][0][1] = new Coordinates(-1,0);
    blockCoords[5][0][2] = new Coordinates(0,1);
    blockCoords[5][0][3] = new Coordinates(1,1);
    blockCoords[5][1][0] = new Coordinates(0,0);
    blockCoords[5][1][1] = new Coordinates(0,1);
    blockCoords[5][1][2] = new Coordinates(-1,1);
    blockCoords[5][1][3] = new Coordinates(-1,2);
    blockCoords[5][2][0] = new Coordinates(0,0);
    blockCoords[5][2][1] = new Coordinates(-1,0);
    blockCoords[5][2][2] = new Coordinates(0,1);
    blockCoords[5][2][3] = new Coordinates(1,1);
    blockCoords[5][3][0] = new Coordinates(0,0);
    blockCoords[5][3][1] = new Coordinates(0,1);
    blockCoords[5][3][2] = new Coordinates(-1,1);
    blockCoords[5][3][3] = new Coordinates(-1,2);
    blockCoords[6][0][0] = new Coordinates(0,0);
    blockCoords[6][0][1] = new Coordinates(0,1);
    blockCoords[6][0][2] = new Coordinates(-1,1);
    blockCoords[6][0][3] = new Coordinates(1,1);
    blockCoords[6][1][0] = new Coordinates(0,0);
    blockCoords[6][1][1] = new Coordinates(0,1);
    blockCoords[6][1][2] = new Coordinates(0,2);
    blockCoords[6][1][3] = new Coordinates(1,1);
    blockCoords[6][2][0] = new Coordinates(-1,0);
    blockCoords[6][2][1] = new Coordinates(0,0);
    blockCoords[6][2][2] = new Coordinates(1,0);
    blockCoords[6][2][3] = new Coordinates(0,1);
    blockCoords[6][3][0] = new Coordinates(0,0);
    blockCoords[6][3][1] = new Coordinates(0,1);
    blockCoords[6][3][2] = new Coordinates(0,2);
    blockCoords[6][3][3] = new Coordinates(-1,1);

}


Block::~Block() {
   for (auto &blockCoord : blockCoords) {
        for (auto &j : blockCoord) {
            for (auto &k : j) {
                delete k;
            }
        }
    }
    delete mainCoord;

}

BlockType Block::getBlockType(){
    return blockType;
}

DirectionType Block::getDirectionType(){
    return directionType;
}

Coordinates &Block::getBlockMainCoordinate(){
    return *mainCoord;
}

 Coordinates &Block::getBlockCoordinate(int i, int j, int k){
    return *blockCoords[i][j][k];
}

void Block::setDirectionType(DirectionType dirType) {
    directionType = dirType;
}
