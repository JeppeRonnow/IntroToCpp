#include "Vaerksted.hpp"
#include <iostream>

using namespace std;

int main() {
    Vaerksted vS("Nymarken 104, 5330 Munkebo", "Lars Peter Hansen");
    Bil b1("MA39604", "Knud Pedersen");
    Bil b2("MH40136", "Lis Fugl");
    Bil b3("MA45647", "Herluf Jensen");
    vS.addBil(b1);
    vS.addBil(b2);
    vS.addBil(b3);

    Mekaniker m1("Poul");
    Mekaniker m2("Per");
    vS.addMekaniker(m1);
    vS.addMekaniker(m2);

    ArbejdsSeddel a1(b1, m2, 7, 20200503);
    ArbejdsSeddel a2(b3, m1, 4, 20200512);
    ArbejdsSeddel a3(b3, m2, 3, 20200514);
    ArbejdsSeddel a4(b1, m1, 5, 20200516);
    ArbejdsSeddel a5(b3, m2, 2, 20200518);

    vS.addArbejdsSeddel(a1);  // Det antages, at arbejdssedler
    vS.addArbejdsSeddel(a2);  // registreres i kronologisk orden
    vS.addArbejdsSeddel(a3);
    vS.addArbejdsSeddel(a4);
    vS.addArbejdsSeddel(a5);


    vS.ingenRegning();

    vS.mekanikerTimer();

    cout << "Seneste arbejde udført: " << vS.senesteArbejde() << endl;
}