#include <iostream>
#include "headers/Dato.h"
#include "headers/Person2.h"
#include "headers/Car.h"

using namespace std;

int main(){
    Dato dd(20250206);

    cout << "Dato: " << dd.getDatoen() << "\n";
    cout << "År: " << dd.getAar() << " Kavrtal: " << dd.getKvartal() << " Måned: " << dd.getMaaned() << " Dag: " << dd.getDag() << "\n";

    Dato pf(20030116);
    Person2 jeppe("Jeppe", "jeppe@jeppe", pf);

    cout << "Name: " << jeppe.getNavn() << "\n";
    cout << "Mail: " << jeppe.getMail() << "\n";
    cout << "Fødselsdato: " << jeppe.getFdato().getAar() << "\n";

    

    Car skoda("ABC123", "Skoda", "Octavia");

    jeppe.addCar(skoda);

    cout << "Regnr: " << skoda.getRegnum() << "\n";
    cout << "Maerke: " << skoda.getMake() << "\n";
    cout << "Model: " << skoda.getModel() << "\n" << "\n";




    for (int i = 0; i < 365*3; i++){
        dd.setDatoPlusEn();
    }

    cout << "Dato: " << dd.getDatoen() << "\n";
    cout << "År: " << dd.getAar() << " Kavrtal: " << dd.getKvartal() << " Måned: " << dd.getMaaned() << " Dag: " << dd.getDag() << "\n";

    if (dd.getLeapYear() == true){
        cout << "Det er skydår" << "\n";
    } else {
        cout << "Det ikke skydår" << "\n";
    }

    cout << "Dage forbi: " << dd.dagIaar() << "\n";
    cout << "Dage tibage: " << dd.restDagIaar() << "\n" << "\n";

    cout << "Dato: " << dd.getDatoen() << "\n";


    cout << "dage til 20270205: " << dd.dageMellem(20270205) << "\n";


    return 0;
}
