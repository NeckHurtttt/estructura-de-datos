#include "queue.h"

// constructor
Queue::Queue() {
    cabeza = 0;
    cola = 0;
    ITEMS = 0;
    ITEMSIZE = 1;
}

// destructor
Queue::~Queue() {}

// regresa 1 si la lista está vacía
int Queue::empty() {
    return ITEMS == 0;
}

// insertar elemento
int Queue::put(int d) {
    if (ITEMS == MAX_SIZE) return -1;
    if (cola >= MAX_SIZE) cola = 0;
    alma[cola] = d;
    cola++;
    ITEMS++;
    return d;
}

// retirar elemento
int Queue::get() {
    char d;
    if (empty()) return -1;
    if (cabeza >= MAX_SIZE) cabeza = 0;
    d = alma[cabeza];
    cabeza++;
    ITEMS--;
    return d;
}

// número de elementos
int Queue::size() {
    return ITEMS;
}