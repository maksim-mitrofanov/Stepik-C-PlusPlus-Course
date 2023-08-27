//
//  resize memory area.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 27.08.2023.
//

#include "resize memory area.hpp"

char *resize(const char *str, unsigned size, unsigned new_size)
{
    int validSize = new_size > size ? size : new_size;
    char * newMemoryRegionPointer = new char[new_size];
    
    for (int index = 0; index < validSize; ++index) {
        newMemoryRegionPointer[index] = str[index];
    }
    
    delete [] str;
    
    return newMemoryRegionPointer;
}
