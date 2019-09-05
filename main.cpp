#include <iostream>
#include <cassert>
#include "MatrizDispersa.h"
#include <time.h>
//using namespace std;

int main() {
    srand(time(nullptr));
    //MatrizDispersa M1(4,4);

    //MatrizDispersa M2;
    //MatrizDispersa M3= M1+M2;
    //string resultado;
    MatrizDispersa m1(3,4);
    m1.rellenar();
    MatrizDispersa m2= m1.transpuesta();


    cout << "Matriz 1: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << m1.getElement(i, j) << " ";
        }
        cout << endl;
    }

    cout << endl << "Matriz 2: " << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << m2.getElement(i, j) << " ";
        }
        cout << endl;
    }

    MatrizDispersa m3 = 2*m1;
    cout << endl << "Matriz 3: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << m2.getElement(i, j) << " ";
        }
        cout << endl;
    }


    return 0;
}