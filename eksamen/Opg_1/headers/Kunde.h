#include <iostream>
#include <string>

using namespace std;

#pragma once

class Kunde {
public:
    Kunde(string navn, string eMail);

    //getter
    string getNavn();
private:
    string eMail;
    string navn;
};