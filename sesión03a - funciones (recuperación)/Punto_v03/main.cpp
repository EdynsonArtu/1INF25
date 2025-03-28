#include <iostream>
#include <assert.h>
#include "punto.hpp"
#include "conjunto.hpp"

using namespace std;

int main(int argc, char** argv) {
    ConjuntoDatosPuntos conjunto;

    cargar_conjunto_de_puntos("puntos.csv", conjunto);

    assert(conjunto.cantidad == 100);
    assert(conjunto.valores[0].x == 926 && conjunto.valores[0].y == 499);
    assert(conjunto.valores[14].x == 431 && conjunto.valores[14].y == 992);
    assert(conjunto.valores[99].x == 329 && conjunto.valores[99].y == 173);
    
    imprimir_conjunto_de_puntos(conjunto);
    return 0;
}

