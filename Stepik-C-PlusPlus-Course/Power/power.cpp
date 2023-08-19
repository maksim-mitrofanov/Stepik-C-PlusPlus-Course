//
//  power.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include "power.hpp"
#include <iostream>

int power(int x, unsigned p) {
    int answer = x;
    int currentPower = 1;
    
    if (p == 0) {
        return 1;
    }
    
    while (currentPower < p) {
        answer *= x;
        currentPower += 1;
    }
    return answer;
}
