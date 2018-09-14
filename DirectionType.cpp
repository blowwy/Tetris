//
// Created by boy on 14.09.18.
//

#include "DirectionType.h"

DirectionType & operator++(DirectionType & directionType){
    return directionType = (directionType == DirectionType::west) ?
                           DirectionType::north : static_cast<DirectionType>(static_cast<int>(directionType) + 1);
}

DirectionType & operator--(DirectionType & directionType){
    return directionType = (directionType == DirectionType::north) ?
                           DirectionType::west : static_cast<DirectionType>(static_cast<int>(directionType) - 1);
}
