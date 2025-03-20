#include "../headers/EAN.hpp"
#include <iostream>

using namespace std; 


int main() { 
    EAN e("9780674062313"); 
    
    cout << e.isValid() << endl; 

    cout << e.ISBNtoEAN("ISBN 0-13-222220-5") << endl;

    return 0;
}