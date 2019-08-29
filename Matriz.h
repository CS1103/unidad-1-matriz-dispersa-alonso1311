//
// Created by ALONSO on 29/08/2019.
//

#ifndef MATRIZ_MATRIZ_H
#define MATRIZ_MATRIZ_H


class Matriz {
private:
    int filas, columnas;
    double** ptr_matriz;
public:
    Matriz(int filas, int columnas);

    void Rellenar(int filas, int columnas);
    void Mostrar(int filas, int columnas);

    void Suma(Matriz, Matriz);
    void Multiplicación(Matriz, Matriz);
    void Multiplicación_Escalar(Matriz, Matriz);
    void Transportacion(Matriz);

    virtual ~Matriz();
};


#endif //MATRIZ_MATRIZ_H
