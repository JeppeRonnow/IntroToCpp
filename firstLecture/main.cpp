#pragma once

#include <iostream>
#include "headers/Dato.h"
#include "headers/Person.h"
#include "headers/Bil.h"

using namespace std;

int main(){
    Dato dd(20250206);

    cout << "Dato: " << dd.getDatoen() << endl;
    cout << "År: " << dd.getAar() << endl;

    Dato pf(20030116);
    Person jeppe("Jeppe", "jeppe@jeppe", pf);

    cout << "Name: " << jeppe.getNavn() << endl;
    cout << "Mail: " << jeppe.getMail() << endl;
    cout << "Fødselsdato: " << jeppe.getFdato().getAar() << endl;

    Bil skoda(jeppe, "ABC123", "Skoda", "Octavia");

    cout << "Ejer: " << skoda.getEjer().getNavn() << endl;
    cout << "Regnr: " << skoda.getRegnr() << endl;
    cout << "Maerke: " << skoda.getMaerke() << endl;
    cout << "Model: " << skoda.getModel() << endl;

    return 0;
}