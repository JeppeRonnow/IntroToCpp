#include "Bog.h"

Bog::Bog(int i, string t, string f, int p){
    id = i;
    titel = t;
    forfatter = f;
    pris = p;
}

int Bog::getPris() const{
    return pris;
}

string Bog::getTitel() const {
    return titel;
}