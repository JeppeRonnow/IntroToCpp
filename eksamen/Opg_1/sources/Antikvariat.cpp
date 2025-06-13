#include "Antikvariat.h"

Antikvariat::Antikvariat(){};

Antikvariat::Antikvariat(string a, string e) {
    adresse = a;
    ejer = e;
};

string Antikvariat::getAdresse(){
    return adresse;
};

string Antikvariat::getEjer(){
    return ejer;
};

void Antikvariat::addBog(Bog enB) {
    boger.push_back(enB);
};

void Antikvariat::addKunde(Kunde enK) {
    kunder.push_back(enK);
};

void Antikvariat::addKurv(Kurv enK) {
    Kurve.push_back(enK);
};

Antikvariat::~Antikvariat(){};

void Antikvariat::billigsteBogIKurv(){
    int pris;

    // find billigste pris
    for (const auto& bog : boger) {
        if (bog.getPris() < pris){
            pris = bog.getPris();
        }
    };

    for (const auto& kurv : Kurve) {
        vector<Bog> kurvensBoger = kurv.getKurvensBoger();

        
        for (const auto& bog : kurvensBoger) {
            if (bog.getPris() == pris){
                cout << bog.getTitel() << " i " 
                << kurv.getKundeNavn() << "'s kurv" << endl;
            }
        };
    };
}

void Antikvariat::tidsforskel() {
    int tidligDato, tidligTid;
    int sidsteDato = 0;
    int sidsteTid = 0;

    for (const auto& kurv : Kurve) {
        if (kurv.getDatoen() < tidligDato && kurv.getTiden() < tidligTid){
            tidligDato = kurv.getDatoen();
            tidligTid = kurv.getTiden();
        }
    };

    for (const auto& kurv : Kurve) {
        if (kurv.getDatoen() > sidsteDato && kurv.getTiden() > sidsteTid) {
            sidsteDato = kurv.getDatoen();
            sidsteTid = kurv.getTiden();
        }
    };


    cout << (sidsteDato % 100)-(tidligDato % 100) << " døgn ";

    cout << ((sidsteTid % 10000) / 100) - ((tidligTid % 10000) / 100) << " timer ";

    cout << (sidsteTid % 100) - (tidligTid % 100) << " minutter" << endl;
};