#include "../headers/Cpr.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    
    Cpr personCpr; 

    personCpr.setCprNr("1601036007");
    cout << "CPR: " << personCpr.getCprNr() << endl;

    cout << "day: " << personCpr.getDag() << endl;
    cout << "month: " << personCpr.getMaaned() << endl;
    cout << "year: " << personCpr.getAar() << endl;
    cout << "date: " << personCpr.getDato() << endl;
    cout << "Age: " << personCpr.getAlder() << endl;

    cout << "Mand?: " << personCpr.erMand() << endl;
    cout << "Kvinde?: " << personCpr.erKvinde() << endl;

    cout << "valid?: " << personCpr.isValid() << endl << endl;    



    personCpr.setCprNr("160e036007");
    cout << "CPR: " << personCpr.getCprNr() << endl;

    cout << "valid?: " << personCpr.isValid() << endl << endl;     

    personCpr.setCprNr("1601asd036007");
    cout << "CPR: " << personCpr.getCprNr() << endl;

    cout << "valid?: " << personCpr.isValid() << endl;    



    return 0;
}
    // Testing day, month, year extraction
