#include "headers/Dato.h"

using namespace std;

Dato::Dato(){

}

Dato::Dato(int d){
    datoen = d;
}

// YYYYMMDD
int Dato::getDatoen(){
    return datoen;
}

// YYYYMMDD
int Dato::getAar(){
    return datoen/10000;
}

// destructor
Dato::~Dato(){

}