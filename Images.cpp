//
// Created by boy on 09.09.18.
//

#include "Images.h"

Images pictures = Images();

Images::Images() : loaded(false){}

QImage & Images::get(const QString &imageName){
    auto it = imageStore.find(imageName);
    if (it == imageStore.end())
        it = imageStore.begin();
    return it.value();
}

void Images::load() {
    if (loaded)
        return;
    imageStore.insert("piece",QImage("/home/boy/Tetris/pictures/piece.jpg").scaled(CELL_HEIGH,CELL_WIDTH));
    loaded = true;
}

