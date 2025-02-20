#include "headers/Car.h"
#include "headers/Person2.h"
#include <string.h>

using namespace std;

Car::Car()
{

}

Car::Car(string r, string m, string mo){
    regnum = r;
    make = m;
    model = mo;
}


string Car::getRegnum(){
    return regnum;
}

string Car::getModel(){
    return model;
}

string Car::getMake(){
    return make;
}


Car::~Car()
{

}