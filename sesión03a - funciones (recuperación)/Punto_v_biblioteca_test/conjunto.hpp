#ifndef CONJUNTO_HPP
#define CONJUNTO_HPP
#include "punto.hpp"

typedef struct {
    TPunto valores[100];
    int cantidad;
} ConjuntoDatosPuntos;

void cargar_conjunto_de_puntos(char *nombre, ConjuntoDatosPuntos &conjunto);

void imprimir_conjunto_de_puntos(ConjuntoDatosPuntos conjunto);

#endif /* CONJUNTO_HPP */

