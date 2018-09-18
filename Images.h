//
// Created by boy on 09.09.18.
//

#ifndef TETRIS_IMAGES_H
#define TETRIS_IMAGES_H

#include <QMap>
#include <QString>
#include "ColorType.h"
#include <QImage>

int const FIELD_APP_HEIGH = 480;
int const FIELD_APP_WIDTH = 240;
int const FIELD_HEIGH = 20;
int const FIELD_WIDTH = 10;
int const CELL_HEIGH = FIELD_APP_HEIGH / FIELD_HEIGH;
int const CELL_WIDTH = FIELD_APP_WIDTH / FIELD_WIDTH;


class Images{
public:
    Images();
    QImage & get(ColorType cType);
    void load();
private:
    bool loaded;
    QMap<ColorType,QImage> imageStore;
};

extern Images pictures;

#endif //TETRIS_IMAGES_H
