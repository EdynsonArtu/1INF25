#ifndef CONJUNTONOMBRES_HPP
#define CONJUNTONOMBRES_HPP
#define TAMANHO_INICIAL 5
#define TAMANHO_BLOQUE 10

typedef struct {
    char **conjunto; //es un arreglo dinámico de cadenas de caracteres (char*)
    int cantidad;
    int capacidad;
} ConjuntoNombres;

void leer_con_incrementos(ConjuntoNombres &conjunto, const char* nombreDeArchivo);

void operator++(ConjuntoNombres &conjunto);

void operator<<(ConjuntoNombres &conjunto, char *nombre);

#endif /* CONJUNTONOMBRES_HPP */

