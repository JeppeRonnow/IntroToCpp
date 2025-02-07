#include "headers/Person2.h"
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

Person2::~Person2()
{

}