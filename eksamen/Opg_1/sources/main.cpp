#include <iostream>

#include "Antikvariat.h"

using namespace std;

int main() {
    Antikvariat ant("Fiolstræde 28", "J.E. Paludan");
    Bog b1(1, "Nordkraft", "Jakob Ejersbo", 125);
    Bog b2(2, "Kolonien", "Martin A. Hansen", 85);
    Bog b3(3, "Vi de druknede", "Carsten Jensen", 220);
    Bog b4(4, "Helten", "Harald Kidde", 65);
    Bog b5(5, "Kvalme", "Jean Paul Sartre", 115);
    Bog b6(6, "Der Steppenwolf", "Herman Hesse", 55);
    ant.addBog(b1);
    ant.addBog(b2);
    ant.addBog(b3);
    ant.addBog(b4);
    ant.addBog(b5);
    ant.addBog(b6);
    Kunde k1("Henrik Nielsen", "heni@gmail.com");
    Kunde k2("Ebbe Hansen", "ebha@juno.com");
    Kunde k3("Allan Svendsen", "alsv@yahoo.com");
    ant.addKunde(k1);
    ant.addKunde(k2);
    ant.addKunde(k3);
    Kurv ku1(k1, 20250521, 714);
    ku1.addBog(b1);
    ku1.addBog(b6);
    Kurv ku2(k3, 20250522, 1021);
    ku2.addBog(b2);
    ku2.addBog(b5);
    ku2.addBog(b3);
    Kurv ku3(k2, 20250521, 1429);
    ku3.addBog(b4);
    ant.addKurv(ku1);
    ant.addKurv(ku2);
    ant.addKurv(ku3);

    // opgaver

    ant.billigsteBogIKurv();

    ant.tidsforskel();
}