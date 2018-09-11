//
// Created by boy on 09.09.18.
//

#include "Images.h"

Images pictures = Images();

Images::Images() : loaded(false){}

bool Images::isLoaded() const {
    return loaded;
}

QImage & Images::get(const QString &imageName){
    QMap<QString,QImage>::iterator it = imageStore.find(imageName);
    if (it == imageStore.end())
        throw 1;
    return it.value();
}

void Images::load() {
    if (loaded)
        return;
    imageStore.insert("background",QImage("/home/boy/Tetris/pictures/tetris_background.jpg").scaled(300,480));
    loaded = true;
}

