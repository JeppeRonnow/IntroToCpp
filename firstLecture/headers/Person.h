#ifndef PERSON_H
#define PERSON_H

#pragma once
#include <string>
#include "Dato.h"
#include "Bil.h"

using namespace std;

class Person
{
public:
    Person();
    Person(string, string, Dato);
    string getNavn();
    string getMail();
    Dato getFdato();
    ~Person();

private:
    string navn;
    string mail;
    Dato fDag;
    //bil
};

#endif