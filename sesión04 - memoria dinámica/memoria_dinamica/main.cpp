#include <iostream>
#include <assert.h>
#include <cstring>
#include "ConjuntoNumero.hpp"
#include "ConjuntoNombres.hpp"

using namespace std;

void test01();
void test02();
void test03();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    return 0;
}

void test03() {
    ConjuntoNombres conjunto;
    leer_con_incrementos(conjunto, "nombres.txt");
    assert(conjunto.cantidad == 105);
    assert(strcmp(conjunto.conjunto[0], "Abel") == 0);
    assert(strcmp(conjunto.conjunto[1], "Abigail") == 0);
    assert(strcmp(conjunto.conjunto[31], "Gianina") == 0);
    assert(strcmp(conjunto.conjunto[104], "Zulma") == 0);
    //imprimir_nombres(conjunto);
    //libera_memoria_del_conjunto(conjunto);
}

void test02() {
    ConjuntoNumeros conjunto;

    leer_con_incremento_en_uno(conjunto, "numeros.txt");
    assert(conjunto.cantidad == 40);
    assert(conjunto.conjunto[0] == 34);
    assert(conjunto.conjunto[1] == 56);
    assert(conjunto.conjunto[39] == 27);

    //imprimir_numeros(conjunto);

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

