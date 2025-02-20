#ifndef CAR_H
#define CAR_H

#pragma once
using namespace std;

#include <string>

class Car
{
public:
    Car();
    Car(string, string, string);
    string getRegnum();
    string getMake();
    string getModel();
    ~Car();

private:
    string regnum;
    string make;
    string model;
};

#endif