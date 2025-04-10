#include <iostream>
#include <cstring>
#include "AperturaDeArchivos.h"
#include "Estructuras.h"
#include "cliente.hpp"

void cargar_clientes(Cliente arregloCliente[60], const char*nombreArchivo) {
    Cliente cliente;
    ifstream archivoCliente;

    AperturaDeUnArchivoDeTextosParaLeer(archivoCliente, nombreArchivo);
    int i = 0;
    while (true) {
        bool ha_leido = archivoCliente >> cliente;
        if (not ha_leido)
            break;
        arregloCliente[i] = cliente;
        i++;
    }
    strcpy(arregloCliente[i].nombre, "FIN");
    archivoCliente.close();
}

void imprimir_reporte_libros_y_clientes(Cliente arregloCliente[60]) {
    int i = 0;
    while (true) {
        Cliente cliente = arregloCliente[i];
        i++;
        if (strcmp(cliente.nombre, "FIN") == 0)
            break;
        cout << cliente << endl;
    }
}