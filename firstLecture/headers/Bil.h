#ifndef BIL_H
#define BIL_H

#pragma once
#include <string>
#include "Person.h"


using namespace std;

class Bil
{
public:
    Bil();
    Bil(Person,string , string, string);
    Person getEjer();
    string getRegnr();
    string getMaerke();
    string getModel();
    ~Bil();

private:
    Person ejer;
    string regnr;
    string maerke;
    string model;
};

#endif