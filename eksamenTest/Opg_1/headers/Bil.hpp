#include <iostream>
#include <string>

using namespace std;

#pragma once

class Bil {
   public:
    Bil();
    Bil(string regNr ,string ejer);

    string getEjer() const;
    string getRegNr() const;

   private:
    string regNr;
    string ejer;
};