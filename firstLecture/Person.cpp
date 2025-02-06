#include "headers/Person.h"
using namespace std;
Person::Person()
{

}

Person::Person(string n, string m, Dato f){
    navn = n;
    mail = m;
    fDag = f;
}

string Person::getNavn(){
    return navn;
}

string Person::getMail(){
    return mail;
}

Dato Person::getFdato(){
    return fDag;
}

Person::~Person()
{

}