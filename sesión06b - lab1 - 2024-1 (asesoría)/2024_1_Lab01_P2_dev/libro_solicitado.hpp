#ifndef LIBRO_SOLICITADO_HPP
#define LIBRO_SOLICITADO_HPP
#include <iostream>
#include <fstream>
#include "Estructuras.h"

using namespace std;

bool operator>>(LibroSolicitado &libroSolicitado, Libro arregloLibro[]);

void cargar_pedidos(LibroSolicitado arregloLibroSolicitado[500], Libro arregloLibro[300], Cliente arregloCliente[60], const char*nombreArchivo);

#endif /* LIBRO_SOLICITADO_HPP */

