//
// Created by boy on 13.09.18.
//

#pragma once

#ifndef TETRIS_DIRECTIONTYPE_H
#define TETRIS_DIRECTIONTYPE_H



enum class DirectionType{
    north,
    east,
    south,
    west
};

DirectionType & operator++(DirectionType & directionType);

DirectionType & operator--(DirectionType & directionType);

#endif //TETRIS_DIRECTIONTYPE_H
