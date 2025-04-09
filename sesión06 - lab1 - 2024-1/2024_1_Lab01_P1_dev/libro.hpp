#ifndef LIBRO_HPP
#define LIBRO_HPP
#include <iostream>
#include <fstream>
#include "Estructuras.h"

using namespace std;

bool operator>>(ifstream &archivo, Libro &libro);

ostream & operator<<(ostream &out, const Libro &libro);

#endif /* LIBRO_HPP */

