#ifndef CONJUNTOARREGLOS_HPP
#define CONJUNTOARREGLOS_HPP

typedef struct {
    int *codigo;
    char **nombre;
    char ***cursos;
    int cantidad;
} ConjuntoArreglos;

void cargar_conjunto_de_arreglos(ConjuntoArreglos &conjunto, const char *nombre_archivo);

void reporte_alumnos(ConjuntoArreglos conjunto, const char *nombre_archivo);

#endif /* CONJUNTOARREGLOS_HPP */

