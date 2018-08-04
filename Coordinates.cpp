//
// Created by boy on 27.07.18.
//

#include "Coordinates.h"

Coordinates::Coordinates() {
    x = 0;
    y = 0;
}

void Coordinates::changeCoordinates(int x, int y) {
    x = x;
    y = y;
}

int Coordinates::getx() const {
    return x;
}

int& Coordinates::getx() {
    return x;
}

int Coordinates::gety() const{
    return y;
}

int& Coordinates::gety() {
    return y;
}



