#include <iostream>
#include "Pila.h"
using namespace std;

int main() {
    Pila pila1, pila2;
    int opcion;
    do {
        cout << "       MENÚ DE PILA ESTÁTICA" << endl;
        cout << "1.- Apilar en pila1" << endl;
        cout << "2.- Desapilar de pila1" << endl;
        cout << "3.- Ver elemento en cima de pila1" << endl;
        cout << "4.- Ver si pila1 está vacía" << endl;
        cout << "5.- Comparar pila1 con pila2" << endl;
        cout << "6.- Ver elementos de pila1" << endl;
        cout << "7.- Limpiar pila1" << endl;
        cout << "0.- Salir" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1: {
            int elemento;
            cout << "Ingrese el elemento a apilar: ";
            cin >> elemento;
            pila1.Apilar(elemento);
            break;
        }
        case 2:
            pila1.Desapilar();
            break;
        case 3: {
            int elemento;
            if (pila1.CimaPila(elemento))
                cout << "El elemento en la cima es: " << elemento << endl;
            break;
        }
        case 4:
            if (pila1.PilaVacia())
                cout << "La pila1 está vacía" << endl;
            else
                cout << "La pila1 NO está vacía" << endl;
            break;
        case 5:
            if (pila1.Iguales(pila2))
                cout << "Las pilas son iguales" << endl;
            else
                cout << "Las pilas NO son iguales" << endl;
            break;
        case 6:
            pila1.VerPila();
            break;
        case 7:
            pila1.LimpiarPila();
            break;
        case 0:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
        }

    } while (opcion != 0);

    return 0;
}
