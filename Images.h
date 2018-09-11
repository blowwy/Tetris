//
// Created by boy on 09.09.18.
//

#ifndef TETRIS_IMAGES_H
#define TETRIS_IMAGES_H

#include <QMap>
#include <QString>
#include <QImage>

class Images{
public:
    Images();
    bool isLoaded() const;
    QImage & get(const QString & imageName);
    void load();
private:
    QMap<QString,QImage> imageStore;
    bool loaded;
};

extern Images pictures;

#endif //TETRIS_IMAGES_H
