//
// Created by boy on 18.09.18.
//

#include "ColorType.h"

ColorType randomColorType(){
    srand(time(0));
    return static_cast<ColorType>(rand( ) % 4 + 1);
}