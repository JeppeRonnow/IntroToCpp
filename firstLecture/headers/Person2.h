#ifndef PERSON2_H
#define PERSON2_H

#pragma once
#include <string>
#include "Dato.h"

using namespace std;

class Person2
{
public:
    Person2();
    Person2(string, string, Dato);
    string getNavn();
    string getMail();
    Dato getFdato();
    ~Person2();

private:
    string navn;
    string mail;
    Dato fDag;
    //bil
};

#endif