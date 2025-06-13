#include <iostream>
#include <string>
#include <vector>

#include <Kunde.h>
#include <Bog.h>

using namespace std;

#pragma once

class Kurv {
public:
    Kurv(Kunde& kunden , int datoen, int tiden);
    void addBog(Bog bog);

    vector<Bog> getKurvensBoger() const;
    string getKundeNavn() const;

    int getTiden() const;
    int getDatoen() const;

private:
    int datoen;
    int tiden;
    Kunde& kunden;
    vector<Bog> boger;

};