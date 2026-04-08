#include "Pila.h"

// Constructor
Pila::Pila() {
    cima = -1;
}

// Apilar un elemento
bool Pila::Apilar(TipoDato elemento) {
    if (cima == MAX - 1) {
        cout << "Desbordamiento de pila (Overflow)" << endl;
        return false;
    }
    cima++;
    pila[cima] = elemento;
    return true;
}

// Desapilar un elemento
bool Pila::Desapilar() {
    if (cima == -1) {
        cout << "La pila está vacía (Underflow)" << endl;
        return false;
    }
    cima--;
    return true;
}

// Obtener el elemento en la cima
bool Pila::CimaPila(TipoDato& elemento) {
    if (cima == -1) {
        cout << "La pila está vacía, no hay cima" << endl;
        return false;
    }
    elemento = pila[cima];
    return true;
}

// Verificar si la pila está vacía
bool Pila::PilaVacia() {
    return cima == -1;
}

// Limpiar la pila
void Pila::LimpiarPila() {
    cima = -1;
    cout << "La pila ha sido limpiada" << endl;
}

// Mostrar todos los elementos
void Pila::VerPila() {
    if (cima == -1) {
        cout << "La pila está vacía" << endl;
        return;
    }
    cout << "Elementos de la pila (de base a cima):" << endl;
    for (int i = 0; i <= cima; i++)
        cout << pila[i] << endl;
}

// Comparar con otra pila
bool Pila::Iguales(Pila p) {
    if (cima != p.cima) return false;
    for (int i = 0; i <= cima; i++)
        if (pila[i] != p.pila[i]) return false;
    return true;
}
