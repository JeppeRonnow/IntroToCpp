#include "headers/Bil.h"
#include "headers/Person.h"

using namespace std;

Bil::Bil()
{

}

Bil::Bil(Person o ,string r, string m, string mo)
{
    ejer = o;
    regnr = r;
    maerke = m;
    model = mo;
}

Person Bil::getEjer(){
    return ejer;
}

string Bil::getRegnr(){
    return regnr;
}

string Bil::getMaerke(){
    return maerke;
}

string Bil::getModel(){
    return model;
}

Bil::~Bil()
{

}