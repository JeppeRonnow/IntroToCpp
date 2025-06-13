#include "Kunde.h"

Kunde::Kunde(string n, string e){
    navn = n;
    eMail = e;
}

string Kunde::getNavn(){
    return navn;
}