#include <iostream>
#include "../headers/Broek.hpp"  // Husk at inkludere din header-fil

using namespace std;

void visBroek(Broek b, string besked) {
    cout << besked << b.getTaeller() << "/" << b.getNaevner() << endl;
}

int main() {
    cout << "Test af Broek klassen:\n\n";

    // Test af konstruktorer
    Broek b1(6, 12);  // Skal forkortes til 1/2
    Broek b2(2, 3);
    Broek b3;         // Standardkonstruktør (fx 0/1)

    b1.forkort();

    visBroek(b1, "b1 (forkortet fra 6/12): ");
    visBroek(b2, "b2 (2/3): ");
    visBroek(b3, "b3 (standard): ");

    // Test af adder (addition)
    Broek sum = b1.adder(b2);
    visBroek(sum, "Addition (b1 + b2): ");

    // Test af subtraher (subtraktion)
    Broek forskel = b1.subtraher(b2);
    visBroek(forskel, "Subtraktion (b1 - b2): ");

    // Test af multiplicer (multiplikation)
    Broek produkt = b1.multiplicer(b2);
    visBroek(produkt, "Multiplikation (b1 * b2): ");

    // Test af divider (division)
    Broek kvotient = b1.divider(b2);
    visBroek(kvotient, "Division (b1 / b2): ");

    // Test operator overloads (+, -, *, /)
    Broek opSum = b1 + b2;
    visBroek(opSum, "Operator + (b1 + b2): ");

    Broek opForskel = b1 - b2;
    visBroek(opForskel, "Operator - (b1 - b2): ");

    Broek opProdukt = b1 * b2;
    visBroek(opProdukt, "Operator * (b1 * b2): ");

    Broek opKvotient = b1 / b2;
    visBroek(opKvotient, "Operator / (b1 / b2): ");

    // Test med negative tal
    Broek negativ(-4, 8);  // Skal forkortes til -1/2
    visBroek(negativ, "Negativ (forkortet fra -4/8): ");

    // Test edge-case (nul tæller)
    Broek nulTaeller(0, 5);  // Skal være 0/1 efter forkortning
    visBroek(nulTaeller, "Nul-taeller (0/5): ");

    return 0;
}
