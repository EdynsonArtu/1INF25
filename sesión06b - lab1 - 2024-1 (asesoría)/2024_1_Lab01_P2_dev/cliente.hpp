#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <iostream>
#include <fstream>
#include "Estructuras.h"

using namespace std;

bool operator>>(ifstream &archivo, Cliente &cliente);

ostream & operator<<(ostream &out, const Cliente &cliente);

bool operator<<(Cliente &cliente, const LibroSolicitado &libroSolicitado);

void operator++(Cliente &cliente);

void cargar_clientes(Cliente arregloCliente[60], const char*nombreArchivo);

void imprimir_reporte_libros_y_clientes(Cliente arregloCliente[60]);

#endif /* CLIENTE_HPP */

