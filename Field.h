//
// Created by boy on 26.07.18.
//

#ifndef UNTITLED_FIELD_H
#define UNTITLED_FIELD_H


#include "Block.h"
#include <QImage>

const int WIDTH = 10;
const int HEIGH = 20;

class Field {

public:
    explicit Field();
    void getTypeNDirection(int & i,int & j,int turn);
    int moveBlock(MoveType type);
    void getBlockXY(int &x ,int &y ,int movex,int movey,int i,int j,int k);
    int getCellColour(int x,int y);
    void TurnBlock(int turnTo);
    Block * getBlock();
    ~Field();

private:
    void offset(int & movex,int & movey,MoveType type);
    bool checkCollisions(int movex,int movey,int turnTo);
    int fixBlock();
    void deleteLine(int y);
    int ** field;
    Block *block;
};


#endif //UNTITLED_FIELD_H
