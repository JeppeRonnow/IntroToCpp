#include <../headers/Forbruger.hpp>

Forbruger::Forbruger(string navn, int maalerNr, int maalerMax) {
    this->navn = navn;
    this->maalerNr = maalerNr;
    this->maalerMax = maalerMax;
}  

void Forbruger::aflaesMaeler(int aflaesning) {
    glAflaesning = nyAflaesning;
    nyAflaesning = aflaesning;
}

string Forbruger::getNavn() {
    return navn;
}

string Forbruger::setNavn(string navn) {
    this->navn = navn;
}

int Forbruger::getMaalerNr() {
    return maalerNr;
}

int Forbruger::beregnForbrug() {
    if (nyAflaesning >= glAflaesning) {
            return nyAflaesning - glAflaesning;
    } else {
            return (maalerMax - glAflaesning + 1) + nyAflaesning;
    }
}



Forbruger::~Forbruger() {}

