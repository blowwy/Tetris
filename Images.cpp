//
// Created by boy on 09.09.18.
//

#include "Images.h"

Images pictures = Images();

Images::Images() : loaded(false){}

QImage & Images::get(ColorType cType){
    auto it = imageStore.find(cType);
    if (it == imageStore.end())
        it = imageStore.begin();
    return it.value();
}

void Images::load() {
    if (loaded)
        return;
    imageStore.insert(ColorType::yellow,QImage("/home/boy/Tetris/pictures/yellow_piece.png").
        scaled(CELL_HEIGH,CELL_WIDTH));
    imageStore.insert(ColorType::green,QImage("/home/boy/Tetris/pictures/green_piece.png").
        scaled(CELL_HEIGH,CELL_WIDTH));
    imageStore.insert(ColorType::blue,QImage("/home/boy/Tetris/pictures/blue_piece.png").
        scaled(CELL_HEIGH,CELL_WIDTH));
    imageStore.insert(ColorType::red,QImage("/home/boy/Tetris/pictures/red_piece.png").
        scaled(CELL_HEIGH,CELL_WIDTH));
    loaded = true;
}

