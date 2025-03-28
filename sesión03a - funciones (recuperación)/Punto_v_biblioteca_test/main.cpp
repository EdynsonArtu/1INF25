#include <iostream>
#include <assert.h>
#include "punto.hpp"
#include "conjunto.hpp"
#define NO_ENCONTRADO -1

using namespace std;

template <typename T>
int busq_secuencial(int llave, T *a, int n) {
    for (int i = 0; i < n; i++)
        if (llave == a[i])
            return i;
    return NO_ENCONTRADO;
}

bool operator==(int llave, const TPunto &p) {
    return llave == p.x;
}

int main(int argc, char** argv) {
    TPunto p;

    actualiza_punto(p);
    cout << p;

    int a[5] = {10, 20, 30, 40, 50};

    assert(busq_secuencial(10, a, 5) != NO_ENCONTRADO);
    assert(busq_secuencial(50, a, 5) != NO_ENCONTRADO);
    assert(busq_secuencial(20, a, 5) != NO_ENCONTRADO);
    assert(busq_secuencial(25, a, 5) == NO_ENCONTRADO);
    assert(busq_secuencial(35, a, 5) == NO_ENCONTRADO);

    ConjuntoDatosPuntos conjunto;
    cargar_conjunto_de_puntos("puntos.csv", conjunto);
    assert(busq_secuencial(926, conjunto.valores, conjunto.cantidad) != NO_ENCONTRADO);
    assert(busq_secuencial(308, conjunto.valores, conjunto.cantidad) != NO_ENCONTRADO);
    assert(busq_secuencial(1111, conjunto.valores, conjunto.cantidad) == NO_ENCONTRADO);

    return 0;
}

