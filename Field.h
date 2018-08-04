//
// Created by boy on 26.07.18.
//

#ifndef UNTITLED_FIELD_H
#define UNTITLED_FIELD_H


#include "Block.h"

const unsigned int WIDTH = 10;
const unsigned int HEIGH = 20;

class Field {

public:
    Field();
    void changeField();
    void moveBlock(MoveType type);
    ~Field();

private:
    char field[HEIGH][WIDTH];
    Block *block;

};


#endif //UNTITLED_FIELD_H
