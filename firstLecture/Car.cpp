#include "headers/Car.h"
#include "headers/Person2.h"
#include <string.h>

using namespace std;

Car::Car()
{

}

Car::Car(Person2 o, string r, string m, string mo){
    driver = o;
    regnum = r;
    make = m;
    model = mo;
}

Person2 Car::getEjer(){
    return driver;
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