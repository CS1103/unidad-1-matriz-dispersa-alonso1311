//
// Created by ALONSO on 29/08/2019.
//

#include "Matriz.h"

Matriz::Matriz(double filas, double columnas) : filas(filas), columnas(columnas) {
    ptr_matriz = new double*[filas];
    for (int i = 0; i < filas; ++i) {
        ptr_matriz[i] = new double[columnas];
    }
}

void Matriz::Rellenar(int filas, int columnas) {
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < columnas; ++j) {
            cout << "Colocar un número [" << i+1 << "][" << j+1 << "]:" << endl;
            cin >> *(*(ptr_matriz+i)+j);
        }
}

void Matriz::Mostrar(int filas, int columnas) {
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < columnas; ++j) {
            cout << *(*(ptr_matriz+i)+j) << " ";
        }
    cout << endl;
}

void Matriz::Suma(Matriz, Matriz) {

}

void Matriz::Multiplicación(Matriz, Matriz) {

}

void Matriz::Multiplicación_Escalar(Matriz, Matriz) {

}

void Matriz::Transportacion(Matriz) {

}

Matriz::~Matriz() {
    for (int i = 0; i < filas; ++i) {
        delete[] ptr_matriz[i];
    }

    delete[] ptr_matriz;
}




