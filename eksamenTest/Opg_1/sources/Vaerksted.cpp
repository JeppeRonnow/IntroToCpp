#include "Vaerksted.hpp"

Vaerksted::Vaerksted() {}

Vaerksted::Vaerksted(string adresse, string ejer) {
    adressen = adresse;
    ejeren = ejer;
}

string Vaerksted::getAdresse() {
    return adressen;
}

string Vaerksted::getEjer() {
    return ejeren;
}

void Vaerksted::addBil(Bil &enB) {
    biler.push_back(enB);
}

void Vaerksted::addMekaniker(Mekaniker &enM) {
    mekanikere.push_back(enM);
}

void Vaerksted::addArbejdsSeddel(ArbejdsSeddel &enA) {
    arbejdsSedler.push_back(enA);
}

Vaerksted::~Vaerksted() {}


// see if cars from biler is in arbejdsSedler
void Vaerksted::ingenRegning() {
    vector<string> ejer;

    for (const auto& bil : biler) {
        for (const auto& seddel : arbejdsSedler) {
            if (bil.getRegNr() == seddel.getBil().getRegNr()) {
                // If the car is found in the work orders, we do not add the owner to the list
                break;
            }
            // If we reach here, it means the car was not found in any work order
            if (&seddel == &arbejdsSedler.back()) { // Check if it's the last seddel
                ejer.push_back(bil.getEjer());
            }
        }
    }

    if (ejer.empty()) {
        cout << "Ingen regning" << endl;
    } else {
        cout << "Ingen regning for: ";
        for (const auto& e : ejer) {
            cout << e << ", ";
        }
        cout << endl;
    }
}

void Vaerksted::mekanikerTimer() {
    for (const auto& mekaniker : mekanikere) {
        int timer = 0;
        for (const auto& seddel : arbejdsSedler) {
            if (seddel.getMekanikerNavn() != mekaniker.getNavn()) {
                continue;
            }
            timer += seddel.getTimer();
        }
        cout << "Mekaniker " << mekaniker.getNavn() << " har arbejdet i " << timer << " timer." << endl;
    }

}

string Vaerksted::senesteArbejde() {
    string seneste = std::to_string(arbejdsSedler[arbejdsSedler.size() - 1].getDatoen());

    return  seneste.substr(6, 2) + "/" +
            seneste.substr(4, 2) + "/" + 
            seneste.substr(0, 4);
}