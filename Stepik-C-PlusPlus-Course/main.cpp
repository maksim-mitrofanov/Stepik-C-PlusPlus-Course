//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int repeatTimes = 0;
    cin >> repeatTimes;
    
    for (int i = 0; i <= repeatTimes; ++i) {
        int argument = 0;
        int times = 0;
        cin >> argument;
        
        cout << "Calculating result for: " << argument << endl;
        
        while (argument > 1) {
            times += 1;
            argument /= 2;
        }
        
        cout << "Result for " << argument;
        cout << " is: " << times << endl;
    }
    
    cout << "Finished execution!" << endl;
    
    return 0;
}
