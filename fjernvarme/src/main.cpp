#include <iostream>
#include "../headers/Distrikt.hpp"
#include "../headers/Forbruger.hpp"

int main() {
    // Opretter et distrikt med en kubikmeterpris på 78 kr.
    Distrikt svindinge(78);  

    // Opretter forbrugere med navn, målernummer og en startmåling.
    Forbruger poul("Poul Thorsen", 1206, 999);
    Forbruger niels("Niels Kragh Hansen", 1227, 999);

    // Tilføj forbrugere til distriktet
    svindinge.addForbruger(poul);
    svindinge.addForbruger(niels);

    // Registrér målinger for Poul
    poul.aflaesMaeler(924);
    poul.aflaesMaeler(18);

    // Registrér målinger for Niels
    niels.aflaesMaeler(608);
    niels.aflaesMaeler(724);

    // Udregn forbrugsafregning for hver forbruger
    std::cout << svindinge.afregnForbruger(1206) << std::endl; // Udskriver 7332
    std::cout << svindinge.afregnForbruger(1227) << std::endl; // Udskriver 9048
    std::cout << svindinge.afregnForbruger(1256) << std::endl; // Udskriver -1 (forbruger findes ikke)

    return 0;
}