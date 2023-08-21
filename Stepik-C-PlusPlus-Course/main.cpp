//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
#include "swap arguments.hpp"

int main(int argc, const char * argv[]) {
    int value1 = 30;
    int value2 = 100;
    
    std::cout << "Current values: ";
    std::cout << "a: " << value1;
    std::cout << " b: " << value2 << std::endl;
    
    swapArguments(&value1, &value2);
    
    std::cout << "After swap: ";
    std::cout << "a: " << value1;
    std::cout << " b: " << value2 << std::endl;
    
    return 0;
}
