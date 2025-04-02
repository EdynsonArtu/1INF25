#ifndef CONJUNTONUMERO_HPP
#define CONJUNTONUMERO_HPP

typedef struct {
    int *conjunto;
    int cantidad;
} ConjuntoNumeros;

void leer_con_asignacion_exacta(ConjuntoNumeros &conjunto, const char *nombreDeArchivo);

void leer_con_incremento_en_uno(ConjuntoNumeros &conjunto, const char *nombreDeArchivo);

void operator++(ConjuntoNumeros &conjunto);

void operator<<(ConjuntoNumeros &conjunto, int dato);

void imprimir_numeros(ConjuntoNumeros conjunto);

void libera_memoria_del_conjunto(ConjuntoNumeros &conjunto);

#endif /* CONJUNTONUMERO_HPP */

