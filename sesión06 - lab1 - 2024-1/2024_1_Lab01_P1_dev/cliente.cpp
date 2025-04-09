#include <iostream>
#include <iomanip>
#include <fstream>
#include "Estructuras.h"
#include "cliente.hpp"
#define MAX_LIBROS_X_CLIENTE 30

using namespace std;

bool operator>>(ifstream &archivo, Cliente &cliente) {
    archivo >> cliente.dni;
    if (archivo.eof())
        return false;
    archivo.get(); //sacamos la coma
    archivo.getline(cliente.nombre, 60);
    cliente.cantDeLibros = 0;
    cliente.pagoTotal = 0;
    return true;
}

ostream & operator<<(ostream &out, const Cliente &cliente) {
    out << cliente.dni;
    out << " ";
    out << cliente.nombre;
}

bool operator<<(Cliente &cliente, const LibroSolicitado &libroSolicitado) {
    if (cliente.cantDeLibros < MAX_LIBROS_X_CLIENTE) {
        cliente.cantDeLibros++;
        cliente.librosSolicitados[cliente.cantDeLibros - 1] = libroSolicitado;
        return true;
    }
    return false;
}

void operator++(Cliente &cliente) {
    double pagoTotal = 0;
    for (int i = 0; i < cliente.cantDeLibros; i++) {
        LibroSolicitado libroSolicitado = cliente.librosSolicitados[i];
        double precio = libroSolicitado.precio;
        if (libroSolicitado.atendido)
            pagoTotal += precio;
    }
    cliente.pagoTotal = pagoTotal;
}