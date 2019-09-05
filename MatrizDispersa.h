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
    vector<Tamano_Matriz>vector_pFilas;
    vector<Tamano_Matriz>vector_pColumnas;
public:
    MatrizDispersa();
    MatrizDispersa(const Tamano_Matriz &,const  Tamano_Matriz &);
    MatrizDispersa(const Tamano_Matriz &,const  Tamano_Matriz &,const Tamano_Matriz &);
    Tamano_Matriz getColumna(){return c_columnas;}
    Tamano_Matriz getFila(){return c_filas;}
    friend MatrizDispersa operator *(const Escalar &, const MatrizDispersa &);
    friend MatrizDispersa operator *(const MatrizDispersa &, const MatrizDispersa &);
    friend MatrizDispersa operator +(const MatrizDispersa &, const MatrizDispersa &);
    friend MatrizDispersa operator -(const MatrizDispersa &, const MatrizDispersa &);
    void rellenar();
    int getElement(int &firstIndex,int &secondIndex)const;
    virtual ~MatrizDispersa();
    MatrizDispersa transpuesta();
};


#endif //UNIDAD_1_MATRIZ_DISPERSA_MAURICIO_RODRIGUEZ_MATRIZDISPERSA_H
