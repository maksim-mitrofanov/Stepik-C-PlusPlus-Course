//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
using namespace std;
#include "strings and characters manipulation.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    char * first = "What a beautiful world it is";
    char * second = "world it";
    int value = firstIndexWherePatternMatches("Hello hao haou thaoau", "aou");
    
    cout << value << endl;
    
    return 0;
}
