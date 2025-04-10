#include <iostream>
#include <iomanip>
#include <fstream>
#include <assert.h>
#include <cstring>
#include "AperturaDeArchivos.h"
#include "Estructuras.h"
#include "cliente.hpp"
#include "libro.hpp"
#include "libro_solicitado.hpp"

using namespace std;

int main(int argc, char** argv) {
    Libro arregloLibro[300];
    Cliente arregloCliente[60];
    LibroSolicitado arregloLibroSolicitado[500];
    
    cargar_libros(arregloLibro, "Libros.csv");
    cargar_clientes(arregloCliente, "Clientes.csv");
    cargar_pedidos(arregloLibroSolicitado, arregloLibro, arregloCliente, "Pedidos.txt");
    imprimir_reporte_libros_y_clientes(arregloCliente);
    return 0;
}