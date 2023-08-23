//
//  move array.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 22.08.2023.
//

#include <iostream>
#include "move array.hpp"
#include "swap arguments.hpp"

void rotate(int a[], unsigned size, int shift) {
    
    for (int shiftIndex = 0; shiftIndex < shift; ++shiftIndex) {
        // one move to left
        int savedValue = 0;
        for (int index = 0; index < size; ++index) {
            int *oldValueAddress = &a[index];
            int nextValue = 0;
            
            if (index + 1 < size) {
                nextValue = a[index + 1];
            }
            
            if (index == 0) {
                savedValue = a[0];
                std::cout << "Saved value: " << savedValue << std::endl;
            }
            *oldValueAddress = nextValue;
        }
        int *lastValueAddress = &a[size - 1];
        *lastValueAddress = savedValue;
    }
}
