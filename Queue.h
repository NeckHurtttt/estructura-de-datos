#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 256
typedef char almacen[MAX_SIZE];

class Queue {
private:
    int cabeza;   // puntero de lectura
    int cola;     // puntero de escritura
    int ITEMS;    // número de elementos en la lista
    int ITEMSIZE; // tamaño de cada elemento
    almacen alma; // el almacen

public:
    Queue();       // constructor
    ~Queue();      // destructor

    int empty();   // regresa 1 si la lista está vacía
    int put(int d); // insertar elemento
    int get();      // retirar elemento
    int size();     // número de elementos
};

#endif