//
// Created by boy on 18.09.18.
//

#ifndef TETRIS_COLORTYPE_H
#define TETRIS_COLORTYPE_H

#include <ctime>
#include <iostream>

enum class ColorType{
    inv,
    red,
    yellow,
    blue,
    green
};

ColorType randomColorType();

#endif //TETRIS_COLORTYPE_H
