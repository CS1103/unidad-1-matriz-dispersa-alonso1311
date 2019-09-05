//
// Created by Alonso on 29/08/2019.
//
#include "MatrizDispersa.h"

MatrizDispersa::MatrizDispersa(const Tamano_Matriz &cFilas,const Tamano_Matriz &cColumnas) : c_filas(cFilas), c_columnas(cColumnas) {
    //dispersion = 10+rand()%40;
    dispersion = 50;
    c_noNulos = Tamano_Matriz((dispersion*c_filas*c_columnas)/100);
}

MatrizDispersa::MatrizDispersa(const Tamano_Matriz &cFilas, const Tamano_Matriz &cColumnas, const Tamano_Matriz &cNoNulos):
        c_filas(cFilas),c_columnas(cColumnas),c_noNulos(cNoNulos){}

MatrizDispersa::MatrizDispersa():c_filas(0),c_columnas(0),c_noNulos(0){}

MatrizDispersa::~MatrizDispersa() {}

void MatrizDispersa::rellenar() {
    //Se asignan valores del 1 al 99 a la matriz
    for (int i = 0; i < c_noNulos; i++){
        vector_valores.push_back(rand()%90);
        //Se asignan las coordenadas
        vector_pFilas.push_back(rand() % (c_filas + 1));
        vector_pColumnas.push_back(rand() % (c_columnas + 1));
        //Se busca que no se repitan
        for (int j = 0; j < i; j++){
            if (vector_pFilas[i] == vector_pFilas[j] && vector_pColumnas[i] == vector_pColumnas[j]){
                vector_pFilas[i] = rand()%(c_filas+1);
                vector_pColumnas[i] = rand()%(c_columnas+1);}
        }
    }
}

int MatrizDispersa::getElement(int &firstIndex, int &secondIndex)const{
    int valor = 0;
    for (int i = 0; i < c_noNulos; i++){
        if (vector_pFilas[i] == firstIndex && vector_pColumnas[i] == secondIndex){
            valor = vector_valores[i];}
    }
    return valor;
}

MatrizDispersa MatrizDispersa::transpuesta() {
    MatrizDispersa temp(c_columnas, c_filas, c_noNulos);
    for (tipoEntero i = 0; i < c_noNulos; i++){
        temp.vector_valores.push_back(vector_valores[i]);
        temp.vector_pColumnas.push_back(vector_pFilas[i]);
        temp.vector_pFilas.push_back(vector_pColumnas[i]);
    }
    return temp;
}

MatrizDispersa operator*(const MatrizDispersa & M1, const MatrizDispersa & M2) {
    long long int valor = 0;
    if (M1.c_columnas == M2.c_filas){
        MatrizDispersa temp(M1.c_columnas, M2.c_filas);
        for (int k = 0; k < M1.c_filas; k++) {
            for (int i = 0; i < M2.c_columnas; i++){
                for (int j = 0; j < M1.c_columnas; j++) {
                    valor = (M1.getElement(k, j) * M2.getElement(j, i));
                }
                if (valor != 0) {
                    temp.vector_valores.push_back(valor);
                    temp.vector_pFilas.push_back(k);
                    temp.vector_pColumnas.push_back(i);
                }
            }
        }
        return temp;
    }
    else throw logic_error("No es posible efectuar la multiplicacion");

}
MatrizDispersa operator+(const MatrizDispersa &M1, const MatrizDispersa &M2) {
    MatrizDispersa M3(M1.c_filas, M1.c_columnas);
    if (M1.c_filas == M2.c_filas && M1.c_columnas == M2.c_columnas){
        for (int i=0; i < M1.c_filas; i++){
            for (int j = 0; j < M2.c_columnas; j++){
                M3.vector_valores.push_back(M1.getElement(i, j) + M2.getElement(i, j));
                M3.vector_pFilas.push_back(i);
                M3.vector_pColumnas.push_back(j);
            }
        }
        M3.c_noNulos = M3.vector_valores.size();
        return M3;
    }
    else
        throw logic_error("Las matrices tienen diferentes dimensiones");
}

MatrizDispersa operator-(const MatrizDispersa &M1, const MatrizDispersa &M2) {
    MatrizDispersa M3(M1.c_filas, M1.c_columnas);
    if (M1.c_filas == M2.c_filas && M1.c_columnas == M2.c_columnas){
        for (int i=0; i < M1.c_filas; i++){
            for (int j = 0; j < M2.c_columnas; j++){
                M3.vector_valores.push_back(M1.getElement(i, j) - M2.getElement(i, j));
                M3.vector_pFilas.push_back(i);
                M3.vector_pColumnas.push_back(j);
            }
        }
        M3.c_noNulos = M3.vector_valores.size();
        return M3;
    }
    else
        throw logic_error("Las matrices tienen diferentes dimensiones");
}

MatrizDispersa operator*(const Escalar & valor, const MatrizDispersa & M1) {
    MatrizDispersa temp(M1.c_filas, M1.c_columnas,M1.c_noNulos);
    for (int i = 0; i < M1.c_noNulos; i++){
        temp.vector_valores.push_back(M1.vector_valores[i]*valor);
        temp.vector_pColumnas.push_back(M1.vector_pColumnas[i]);
        temp.vector_pFilas.push_back(M1.vector_pFilas[i]);
    }
    return temp;
}

