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
    void changeField();
    void moveBlock(MoveType type);
    void TurnBlock(int turnTo);
    Block * getBlock();
    ~Field();

private:
    void offset(int & movex,int & movey,MoveType type);
    bool checkCollisions(int movex,int movey,int turnTo);
    int field[HEIGH][WIDTH];
    Block *block;
};


#endif //UNTITLED_FIELD_H
