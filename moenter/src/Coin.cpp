#include <../headers/Coin.hpp>

// Standardkonstruktør
Coin::Coin()
    : country(Country()), catalogueNumber(0), yearIssued(0),
      motive(""), faceValue(0), value(0) {}

// Konstruktør med parametre
Coin::Coin(const Country& country, int catalogueNumber, int yearIssued,
           string motive, int faceValue, int value)
    : country(country), catalogueNumber(catalogueNumber), yearIssued(yearIssued),
      motive(motive), faceValue(faceValue), value(value) {}

// Getters
Country Coin::getCountry() const {
    return country;
}

int Coin::getCatalogueNumber() const {
    return catalogueNumber;
}

int Coin::getYearIssued() const {
    return yearIssued;
}

string Coin::getMotive() const {
    return motive;
}

int Coin::getFaceValue() const {
    return faceValue;
}

int Coin::getValue() const {
    return value;
}

// Ændr værdi
void Coin::changeValue(int delta) {
    value += delta;
}

// Destruktør
Coin::~Coin() {}
