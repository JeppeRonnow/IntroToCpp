#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
using namespace std;

class Country {
public:
    Country();                      // Standardkonstruktør
    Country(const string& name);   // Konstruktør med navn
    string getName() const;        // Returnerer navnet på landet

private:
    string name;                   // Landets navn
};

#endif
