#ifndef DATO_H
#define DATO_H

#pragma once

using namespace std;

class Dato
{
public:
    Dato();
    Dato(int);

    // getters
    int getDatoen();
    int getAar();
    int getMaaned();
    int getDag();
    int getKvartal();
    bool getLeapYear();
    int dagIaar();
    int restDagIaar();
    bool validDato();

    //setters
    void setDatoen(int);
    void setAar(int);
    void setMaaned(int);
    void setDag(int);
    void setDatoPlusEn();
    void setDatoMinusEn();


    ~Dato();

private:
    int datoen; // YYYYMMDD
};

#endif