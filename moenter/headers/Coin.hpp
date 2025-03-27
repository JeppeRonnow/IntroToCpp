#ifndef COIN_H
#define COIN_H

#include "Country.hpp"
#include <string>
using namespace std;

class Coin {
public:
    Coin();
    Coin(const Country& country, int catalogueNumber, int yearIssued,
         string motive, int faceValue, int value);

    Country getCountry() const;
    int getCatalogueNumber() const;
    int getYearIssued() const;
    string getMotive() const;
    int getFaceValue() const;
    int getValue() const;

    void changeValue(int newValue); // Kan ændre møntens værdi

    ~Coin();

private:
    Country country;       // Det land, som har udstedt mønten
    int catalogueNumber;   // Katalognummer til identifikation af mønten
    int yearIssued;        // Det år, mønten blev udstedt
    string motive;         // Møntens motiv
    int faceValue;         // Pålydende værdi i landets valuta
    int value;             // Katalogværdi – hvad mønten kan handles til
};

#endif
