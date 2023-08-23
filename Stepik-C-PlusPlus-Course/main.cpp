//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    char * str1 = "How do you do";
    
    unsigned count = 0;
    while (*(str1 +count) != '\0') {
        count += 1;
    }
    
    cout << "String count: " << count << endl;

        
    return 0;
}
