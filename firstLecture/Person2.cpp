#include "headers/Person2.h"
#include "headers/Car.h"



using namespace std;
Person2::Person2()
{

}

Person2::Person2(string n, string m, Dato f){
    navn = n;
    mail = m;
    fDag = f;
}

string Person2::getNavn(){
    return navn;
}

string Person2::getMail(){
    return mail;
}

Dato Person2::getFdato(){
    return fDag;
}

void Person2::addCar(Car c){
    car = c;
}

Person2::~Person2()
{

}