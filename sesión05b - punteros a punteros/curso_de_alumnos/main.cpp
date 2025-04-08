#include <iostream>
#include "ConjuntoArreglos.hpp"
using namespace std;

int main(int argc, char** argv) {
    ConjuntoArreglos conjunto;
    cargar_conjunto_de_arreglos(conjunto, "Alumnos-Cursos.csv");
    reporte_alumnos(conjunto, "Reporte-Alumnos.txt");
    return 0;
}

