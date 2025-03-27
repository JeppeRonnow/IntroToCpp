#include <../headers/Distrikt.hpp>
#include <../headers/Forbruger.hpp>


Distrikt::Distrikt(int prisM3) {
    this->prisM3 = prisM3;
}

void Distrikt::addForbruger(Forbruger forbruger) {
    forbrugere.push_back(forbruger);
    antalForbrugere++;
}

int Distrikt::afregnForbruger(int maalerNr) {
    for (int i = 0; i < antalForbrugere; i++) {
        if (forbrugere[i].getMaalerNr() == maalerNr) {
            return forbrugere[i].beregnForbrug() * prisM3;
        }
    }

    return -1;
}