#include "Mekaniker.hpp"

Mekaniker::Mekaniker(string n) {
    navn = n;
}

string Mekaniker::getNavn() const {
    return navn;
}