#include "../headers/Distrikt.hpp"
#include "../headers/Forbruger.hpp"

Distrikt::Distrikt(int prisM3) {
    this->prisM3 = prisM3;
}

void Distrikt::addForbruger(Forbruger& f) {
    forbrugere.push_back(&f);
}

int Distrikt::afregnForbruger(int maalerNummer) {
    for (auto f : forbrugere) {
        if (f->getMaalerNr() == maalerNummer) {
            return f->beregnForbrug() * prisM3;
        }
    }
    return -1;
}
