//
// Created by boy on 14.09.18.
//

#include "BlockType.h"

BlockType randomBlockType(){
    srand(time(0));
    return static_cast<BlockType>(rand( ) % 7);
}

