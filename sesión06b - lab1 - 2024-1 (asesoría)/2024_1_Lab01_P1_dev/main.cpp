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

void test01();
void test02();
void test03();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    return 0;
}

void test03() {
    Libro libro;
    Libro arregloLibro[300];

    ifstream archivoLibro;
    AperturaDeUnArchivoDeTextosParaLeer(archivoLibro, "Libros.csv");
    int i = 0;
    while (archivoLibro >> libro) {
        arregloLibro[i] = libro;
        i++;
    }
    strcpy(arregloLibro[i].codigo, "FIN");
    archivoLibro.close();

    LibroSolicitado libroSolicitado;
    strcpy(libroSolicitado.codigoDelLibro, "IIM5175");
    bool resultado = libroSolicitado >> arregloLibro;
    assert(resultado);
    assert(libroSolicitado.precio = 30.23);

    resultado = libroSolicitado >> arregloLibro;
    assert(resultado);

    resultado = libroSolicitado >> arregloLibro;
    assert(resultado == false);

    strcpy(libroSolicitado.codigoDelLibro, "ZZZZZZ");
    resultado = libroSolicitado >> arregloLibro;
    assert(resultado == false);
}

void test02() {
    Cliente cliente;
    ifstream archivoCliente;

    AperturaDeUnArchivoDeTextosParaLeer(archivoCliente, "Clientes.csv");
    while (archivoCliente >> cliente)
        cout << cliente << endl;
    archivoCliente.close();
}

void test01() {
    Libro libro;
    ifstream archivoLibro;

    AperturaDeUnArchivoDeTextosParaLeer(archivoLibro, "Libros.csv");
    while (archivoLibro >> libro)
        cout << libro << endl;
    archivoLibro.close();
}