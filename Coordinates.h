//
// Created by boy on 27.07.18.
//

#ifndef UNTITLED_COORDINATE_H
#define UNTITLED_COORDINATE_H


class Coordinates {
public:
    Coordinates(int x,int y);
    int getx() const;
    int & getx();
    int gety() const;
    int & gety();
    ~Coordinates();
private:
    int x;
    int y;
};


#endif //UNTITLED_COORDINATE_H
