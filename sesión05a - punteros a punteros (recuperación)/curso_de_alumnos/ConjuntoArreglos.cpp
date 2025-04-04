#include <iostream>
#include <fstream>
#include <cstring>
#include "ConjuntoArreglos.hpp"

using namespace std;

void cargar_conjunto_de_arreglos(ConjuntoArreglos &conjunto, const char *nombre_archivo) {
    ifstream archivo(nombre_archivo, ios::in);
    if (not archivo.is_open()) {
        cout << "El archivo no se ha podido aperturar" << endl;
        exit(10);
    }
    
    int i=0;
    int buffer_codigo[50];
    char *buffer_nombre[50];
    char **buffer_cursos[50];

    archivo.close();
}

void reporte_alumnos(ConjuntoArreglos conjunto, const char *nombre_archivo) {

}