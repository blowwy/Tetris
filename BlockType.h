//
// Created by boy on 04.08.18.
//
#pragma once

#ifndef UNTITLED_BLOCKTYPES_H
#define UNTITLED_BLOCKTYPES_H

#include <ctime>
#include <iostream>

enum class BlockType{
    jshape,
    lshape,
    line,
    sqaure,
    sshape,
    zshape,
    tee
};

BlockType randomBlockType();

#endif //UNTITLED_BLOCKTYPES_H
