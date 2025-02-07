#ifndef CAR_H
#define CAR_H

#pragma once
using namespace std;

#include "Person2.h"
#include <string>

class Car
{
public:
    Car();
    Car(Person2, string, string, string);
    Person2 getEjer();
    string getRegnum();
    string getMake();
    string getModel();
    ~Car();

private:
    Person2 driver;
    string regnum;
    string make;
    string model;
};

#endif