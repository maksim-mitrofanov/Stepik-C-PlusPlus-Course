//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>

void reverted() {
    int value = 0;
    std::cin >> value;
    
    if (value == 0) { return; }
    else { reverted(); }
    std::cout << value << " ";
}

int main(int argc, const char * argv[]) {
    reverted();
    return 0;
}
