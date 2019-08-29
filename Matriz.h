//
// Created by ALONSO on 29/08/2019.
//

#ifndef MATRIZ_MATRIZ_H
#define MATRIZ_MATRIZ_H

#include "Definiciones.h"

class Matriz {
private:
    int filas, columnas;
    double** ptr_matriz;
public:
    Matriz(int filas, int columnas);

    void Rellenar();
    void Mostrar();

    /*void Suma(Matriz, Matriz);
    void Multiplicacion(Matriz, Matriz);
    void Multiplicacion_Escalar(Matriz, double);
    void Transportacion(Matriz);*/

    virtual ~Matriz();
};


#endif //MATRIZ_MATRIZ_H
