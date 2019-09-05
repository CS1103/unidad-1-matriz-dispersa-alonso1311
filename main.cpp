#include "MatrizDispersa.h"
#include "Definiciones.h"

void Imprimir(MatrizDispersa m){
    for (int i = 0; i < m.getFila(); i++){
        for (int j = 0;j < m.getColumna(); j++){
            cout << m.getElement(i,j)<<" ";
        }
        cout << endl;
    }
}


int main() {
    srand(time(nullptr));
    MatrizDispersa m1(1000,1000);
    m1.rellenar();
    Imprimir(m1);
    MatrizDispersa m2 = m1.transpuesta();
    MatrizDispersa m3 = 5*m1;
    MatrizDispersa m4 = m1+m3;
    MatrizDispersa m5 = m3*m4;

    cout << "Matriz 1: " << endl;
    Imprimir(m1);

    cout << endl << "Matriz 2:" <<endl;
    Imprimir(m2);

    cout << endl << "Matriz 3: " << endl;
    Imprimir(m3);

    cout << endl << "Matriz 4: " << endl;
    Imprimir(m4);

    cout << endl << "Matriz 5: " << endl;
    Imprimir(m5);

    return 0;
}