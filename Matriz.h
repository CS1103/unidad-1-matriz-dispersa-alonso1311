//
// Created by ALONSO on 29/08/2019.
//

#ifndef MATRIZ_MATRIZ_H
#define MATRIZ_MATRIZ_H


class Matriz {
private:
    double filas, columnas;
public:
    Matriz(double filas, double columnas);

    void Suma(Matriz, Matriz);
    void Multiplicación(Matriz, Matriz);
    void Multiplicación_Escalar(Matriz, Matriz);
    void Transportacion(Matriz);


};


#endif //MATRIZ_MATRIZ_H
