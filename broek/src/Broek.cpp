#include "../headers/Broek.hpp"

Broek::Broek() {
    taeller = 0;
    naevner = 1;
}

Broek::Broek(int aN, int aD) {
    taeller = aN;
    naevner = aD;
}

int Broek::getTaeller() {
    return taeller;
}

int Broek::getNaevner() {
    return naevner;
}

void Broek::forkort() {
    int divisor = std::gcd(abs(taeller), abs(naevner)); // Correctly calculate the GCD
    taeller /= divisor;
    naevner /= divisor;

    if (naevner < 0) { // Ensure the denominator is positive
        taeller = -taeller;
        naevner = -naevner;
    }
}

Broek Broek::adder(Broek aF) {
    Broek sum(taeller * aF.naevner + aF.taeller * naevner, naevner * aF.naevner);
    return sum;
}

Broek Broek::subtraher(Broek aF) {
    Broek diff(taeller * aF.naevner - aF.taeller * naevner, naevner * aF.naevner);
    return diff;
}

Broek Broek::multiplicer(Broek aF) {
    Broek prod(taeller * aF.taeller, naevner * aF.naevner);
    return prod;
}

Broek Broek::divider(Broek aF) {
    Broek quot(taeller * aF.naevner, naevner * aF.taeller);
    return quot;
}

Broek Broek::operator+(Broek b) {
    return adder(b);
}

Broek Broek::operator-(Broek b) {
    return subtraher(b);
}

Broek Broek::operator*(Broek b) {
    return multiplicer(b);
}

Broek Broek::operator/(Broek b) {
    return divider(b);
}

Broek::~Broek() {}