#include "Kurv.h"

Kurv::Kurv(Kunde& kunden, int datoen, int tiden)
    : kunden(kunden), datoen(datoen), tiden(tiden) {
}

void Kurv::addBog(Bog bog){
    boger.push_back(bog);
};

vector<Bog> Kurv::getKurvensBoger() const{
    return boger;
}

string Kurv::getKundeNavn() const{
    return kunden.getNavn();
}

int Kurv::getDatoen() const{
    return datoen;
}

int Kurv::getTiden() const{
    return tiden;
}