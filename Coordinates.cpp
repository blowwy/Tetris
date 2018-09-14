//
// Created by boy on 27.07.18.
//

#include "Coordinates.h"

Coordinates::Coordinates(int tx,int ty) : x(tx),y(ty){}

int Coordinates::getx() const {
    return x;
}

int Coordinates::gety() const{
    return y;
}


void Coordinates::addOffset(int tx, int ty) {
    x += tx;
    y += ty;
}
