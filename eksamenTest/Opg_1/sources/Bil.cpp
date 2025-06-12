#include "Bil.hpp"

Bil::Bil(string r, string e) {
    regNr = r;
    ejer = e;
}

string Bil::getEjer() const {
    return ejer;
}

string Bil::getRegNr() const {
    return regNr;
}