//
// Created by boy on 27.07.18.
//

#ifndef UNTITLED_COORDINATE_H
#define UNTITLED_COORDINATE_H


class Coordinates {
public:
    explicit Coordinates();
    explicit Coordinates(int tx,int ty);
    void addOffset(int tx,int ty);
    int getx() const;
    int gety() const;

    ~Coordinates() = default;
private:
    int x;
    int y;
};


#endif //UNTITLED_COORDINATE_H
