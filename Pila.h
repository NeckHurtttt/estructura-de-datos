#ifndef PILA_H
#define PILA_H

#include <iostream>
using namespace std;

#define MAX 100
using TipoDato = int;

class Pila {
private:
    TipoDato pila[MAX];
    int cima;

public:
    Pila(); // Constructor
    bool Apilar(TipoDato elemento);
    bool Desapilar();
    bool CimaPila(TipoDato& elemento);
    bool PilaVacia();
    void LimpiarPila();
    void VerPila();
    bool Iguales(Pila p);
};

#endif
