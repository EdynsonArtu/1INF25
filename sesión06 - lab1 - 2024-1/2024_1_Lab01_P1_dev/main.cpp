#include <iostream>
#include <iomanip>
#include <fstream>
#include <assert.h>
#include "AperturaDeArchivos.h"
#include "Estructuras.h"
#include "cliente.hpp"
#include "libro.hpp"
#include "libro_solicitado.hpp"

using namespace std;

void test01();

int main(int argc, char** argv) {
    test01();
    return 0;
}

void test01() {
    Libro libro;
    ifstream archivoLibro;

    AperturaDeUnArchivoDeTextosParaLeer(archivoLibro, "Libros.csv");
    while (archivoLibro >> libro)
        cout << libro << endl;
    archivoLibro.close();
}