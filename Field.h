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
    int moveBlock(MoveType type);
    ColorType getCellColour(int x,int y) const;
    void getBlockTypeNDirection(int &i, int &j, int turn) const;
    void getBlockXY(int &x ,int &y ,int movex,int movey,int i,int j,int k) const;
    void TurnBlock(int turnTo);
    Block * getBlock() const;
    ~Field();

private:
    bool isPieceInside(int x,int y) const;
    bool checkCollisions(int movex,int movey,int turnTo) const;
    int fixBlock();
    int deleteCompletedLines();
    void offset(int & movex,int & movey,MoveType type) const;
    void deleteLine(int y);
    ColorType ** field;
    Block *block;
};


#endif //UNTITLED_FIELD_H
