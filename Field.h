//
// Created by boy on 26.07.18.
//

#ifndef UNTITLED_FIELD_H
#define UNTITLED_FIELD_H


const unsigned int width = 10;
const unsigned int heigh = 20;

class Field {

public:
    Field();
    void changeField()
    ~Field();

private:
    char field[heigh][width];
    Block *block;

};


#endif //UNTITLED_FIELD_H
