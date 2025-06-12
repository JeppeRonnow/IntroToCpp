#include <iostream>
#include <string>

using namespace std;

#pragma once

class Mekaniker{
public:
    Mekaniker();
    Mekaniker(string navn);
    string getNavn() const;
   
private:
    string navn;

};