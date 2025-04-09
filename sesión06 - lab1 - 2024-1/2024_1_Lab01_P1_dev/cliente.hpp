#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <iostream>
#include <fstream>
#include "Estructuras.h"

using namespace std;

bool operator>>(ifstream &archivo, Cliente &cliente);

ostream & operator<<(ostream &out, const Cliente &cliente);

bool operator<<(Cliente &cliente, const LibroSolicitado &libroSolicitado);

#endif /* CLIENTE_HPP */

