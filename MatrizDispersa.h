//
// Created by Alonso on 29/08/2019.
//

#ifndef UNIDAD_1_MATRIZ_DISPERSA_MAURICIO_RODRIGUEZ_MATRIZDISPERSA_H
#define UNIDAD_1_MATRIZ_DISPERSA_MAURICIO_RODRIGUEZ_MATRIZDISPERSA_H

#include "Definiciones.h"

class MatrizDispersa {
private:
    int c_filas;int  dispersion;
    int c_columnas;
    int c_noNulos;
    vector<tipoEntero>vector_valores;
    vector<int>vector_pFilas;
    vector<int>vector_pColumnas;
public:
    MatrizDispersa();
    MatrizDispersa(const long int &,const  long int &);
    MatrizDispersa(const long int &,const  long int &,const long int &);
    int getColumna(){return c_columnas;}
    int getFila(){return c_filas;}
    friend MatrizDispersa operator *(const int &,const MatrizDispersa &);
    friend MatrizDispersa operator*(const MatrizDispersa &, const MatrizDispersa &);
    friend MatrizDispersa operator+(const MatrizDispersa &, const MatrizDispersa &);
    friend MatrizDispersa operator-(const MatrizDispersa &, const MatrizDispersa &);
    void rellenar();
    int getElement(int &firstIndex,int &secondIndex)const;
    virtual ~MatrizDispersa();
    MatrizDispersa transpuesta();
};


#endif //UNIDAD_1_MATRIZ_DISPERSA_MAURICIO_RODRIGUEZ_MATRIZDISPERSA_H
