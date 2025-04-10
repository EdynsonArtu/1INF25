#ifndef LIBRO_HPP
#define LIBRO_HPP
#include <iostream>
#include <fstream>
#include "Estructuras.h"
#define LIBRO_NO_ENCONTRADO -1

using namespace std;

bool operator>>(ifstream &archivo, Libro &libro);

ostream & operator<<(ostream &out, const Libro &libro);

int buscar_libro(char *codigo, Libro arregloLibro[]);

#endif /* LIBRO_HPP */

