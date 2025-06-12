#include "ArbejdsSeddel.hpp"

ArbejdsSeddel::ArbejdsSeddel(Bil& bil, Mekaniker& mekaniker, int timerne, int datoen)
    : bil(bil), mekaniker(mekaniker), datoen(datoen), timerne(timerne) {
}

Bil& ArbejdsSeddel::getBil() const {
    return bil;
}

int ArbejdsSeddel::getTimer() const {
    return timerne;
}

string ArbejdsSeddel::getMekanikerNavn() const {
    return mekaniker.getNavn();
}

int ArbejdsSeddel::getDatoen() const {
    return datoen;
}