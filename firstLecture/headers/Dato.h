#ifndef DATO_H
#define DATO_H

#pragma once

using namespace std;

class Dato
{
public:
    Dato();
    Dato(int);
    int getDatoen();
    int getAar();
    ~Dato();

private:
    int datoen; // YYYYMMDD
};

#endif