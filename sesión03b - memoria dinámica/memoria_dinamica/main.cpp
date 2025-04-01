#include <iostream>
#include <assert.h>
#include "ConjuntoNumero.hpp"

using namespace std;

void test01();
void test02();

int main(int argc, char** argv) {
    test01();
    test02();
    return 0;
}

void test02() {
    ConjuntoNumeros conjunto;

    leer_con_incremento_en_uno(conjunto, "numeros.txt");
    assert(conjunto.cantidad == 40);
    assert(conjunto.conjunto[0] == 34);
    assert(conjunto.conjunto[1] == 56);
    assert(conjunto.conjunto[39] == 27);

    imprimir_numeros(conjunto);
    
    libera_memoria_del_conjunto(conjunto);
}

void test01() {
    ConjuntoNumeros conjunto;

    leer_con_asignacion_exacta(conjunto, "numeros.txt");
    assert(conjunto.cantidad == 40);
    assert(conjunto.conjunto[0] == 34);
    assert(conjunto.conjunto[1] == 56);
    assert(conjunto.conjunto[39] == 27);
    
    libera_memoria_del_conjunto(conjunto);
}

