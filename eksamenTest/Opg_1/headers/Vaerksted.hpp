#include <string>
#include <iostream>
#include <vector>

#include "Bil.hpp"
#include "Mekaniker.hpp"
#include "ArbejdsSeddel.hpp"

using namespace std;

#pragma once

class Vaerksted {
public:
   Vaerksted();
   Vaerksted(string adresse, string ejer);
   string getAdresse();
   string getEjer();
   void addBil(Bil &enB);
   void addMekaniker(Mekaniker &enM);
   void addArbejdsSeddel(ArbejdsSeddel &enA);
   ~Vaerksted();

   // opgaver
   void ingenRegning();
   void mekanikerTimer();
   string senesteArbejde();

private : string adressen;
   string ejeren;

   vector<Bil> biler;          // Vector til at holde styr på bilerne
   vector<Mekaniker> mekanikere; // Vector til at holde styr på mekanikerne
   vector<ArbejdsSeddel> arbejdsSedler; // Vector til at holde styr på arbejds sedlerne
   
};