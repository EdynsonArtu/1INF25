#include <iostream>
#include <iomanip>
#include <fstream>
#include "Estructuras.h"
#include "libro_solicitado.hpp"
#include "libro.hpp"

using namespace std;

bool operator>>(LibroSolicitado &libroSolicitado, Libro arregloLibro[]) {
    char *codigo = libroSolicitado.codigoDelLibro;
    int i = buscar_libro(codigo, arregloLibro);
    if (i != LIBRO_NO_ENCONTRADO){
        Libro libro = arregloLibro[i];
        if (libro.stock>0){
            libroSolicitado.precio = libro.precio;
            libroSolicitado.atendido = true;
            libro.stock--;
            arregloLibro[i] = libro; //probar sin esta línea
        }
        else
            libroSolicitado.atendido = false;
    }
    else
        libroSolicitado.atendido = false;
    return libroSolicitado.atendido;
}