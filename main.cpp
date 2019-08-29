#include "Definiciones.h"
#include "Matriz.h"
#include "Matriz.cpp"

int main() {

    Matriz* matriz = new Matriz(3,3);

    matriz->Rellenar();

    matriz->Mostrar();
    return 0;
}