#include <string>
#include <iostream>
#include <vector>

#include "Bog.h"
#include "Kunde.h"
#include "Kurv.h"

using namespace std;

#pragma once

class Antikvariat {
   public:
    Antikvariat();
    Antikvariat(string adresse, string ejer);
    string getAdresse();
    string getEjer();
    void addBog(Bog enB);
    void addKunde(Kunde enK);
    void addKurv(Kurv enK);
    ~Antikvariat();

    // Opgaver
    void billigsteBogIKurv();
    void tidsforskel();

private:
    string adresse;
    string ejer;

    vector<Bog> boger;
    vector<Kunde> kunder;
    vector<Kurv> Kurve;

};