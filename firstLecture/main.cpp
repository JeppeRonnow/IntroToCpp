#include <iostream>
#include "headers/Dato.h"
#include "headers/Person2.h"
#include "headers/Car.h"

using namespace std;

int main(){
    Dato dd(20250206);

    cout << "Dato: " << dd.getDatoen() << endl;
    cout << "År: " << dd.getAar() << endl;

    Dato pf(20030116);
    Person2 jeppe("Jeppe", "jeppe@jeppe", pf);

    cout << "Name: " << jeppe.getNavn() << endl;
    cout << "Mail: " << jeppe.getMail() << endl;
    cout << "Fødselsdato: " << jeppe.getFdato().getAar() << endl;

    Car skoda(jeppe, "ABC123", "Skoda", "Octavia");
    cout << "Ejer: " << skoda.getEjer().getNavn() << endl;
    cout << "Regnr: " << skoda.getRegnum() << endl;
    cout << "Maerke: " << skoda.getMake() << endl;
    cout << "Model: " << skoda.getModel() << endl;


    return 0;
}