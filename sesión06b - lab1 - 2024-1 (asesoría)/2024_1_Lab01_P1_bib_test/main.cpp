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
void test04();


/*
 * En esta solución no se incluído la librería libaperturadearchivosbibl.a
 * en la biblioteca. A pesar que está en el directorio. ESTO NO 
 * IMPIDE QUE SE GENERE LA LIBRERIA. Pero al momento de usar la
 * librería creada por nosotros, debemos incluirla para que pueda
 * linkearla.
 * 
 * TAREA: 
 * (1) incluir la libreria libaperturadearchivosbibl.a en la generación de la
 * librería lib2024_1_lab01_p1_bib.a
 * (2) en el proyecto de prueba, quitar la referencia a libaperturadearchivosbibl.a
*/
int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    test04();
    return 0;
}

void test04() {
    LibroSolicitado libroSolicitado;
    Cliente cliente;

    libroSolicitado.numeroDePedido = 11111;
    strcpy(libroSolicitado.codigoDelLibro, "IIM5175");
    libroSolicitado.atendido = true;
    libroSolicitado.precio = 10;

    strcpy(cliente.nombre, "XXX YYY ZZZ");
    cliente.cantDeLibros = 0;

    ++cliente;
    assert(cliente.pagoTotal == 0);

    //TAREA: incluir las pruebas en un for.
    bool resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 1);
    ++cliente;
    assert(cliente.pagoTotal == 10);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 2);
    ++cliente;
    assert(cliente.pagoTotal == 20);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 3);
    ++cliente;
    assert(cliente.pagoTotal == 30);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 4);
    ++cliente;
    assert(cliente.pagoTotal == 40);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 5);
    ++cliente;
    assert(cliente.pagoTotal == 50);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 6);
    ++cliente;
    assert(cliente.pagoTotal == 60);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 7);
    ++cliente;
    assert(cliente.pagoTotal == 70);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 8);
    ++cliente;
    assert(cliente.pagoTotal == 80);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 9);
    ++cliente;
    assert(cliente.pagoTotal == 90);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 10);
    ++cliente;
    assert(cliente.pagoTotal == 100);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 11);
    ++cliente;
    assert(cliente.pagoTotal == 110);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 12);
    ++cliente;
    assert(cliente.pagoTotal == 120);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 13);
    ++cliente;
    assert(cliente.pagoTotal == 130);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 14);
    ++cliente;
    assert(cliente.pagoTotal == 140);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 15);
    ++cliente;
    assert(cliente.pagoTotal == 150);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 16);
    ++cliente;
    assert(cliente.pagoTotal == 160);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 17);
    ++cliente;
    assert(cliente.pagoTotal == 170);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 18);
    ++cliente;
    assert(cliente.pagoTotal == 180);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 19);
    ++cliente;
    assert(cliente.pagoTotal == 190);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 20);
    ++cliente;
    assert(cliente.pagoTotal == 200);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 21);
    ++cliente;
    assert(cliente.pagoTotal == 210);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 22);
    ++cliente;
    assert(cliente.pagoTotal == 220);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 23);
    ++cliente;
    assert(cliente.pagoTotal == 230);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 24);
    ++cliente;
    assert(cliente.pagoTotal == 240);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 25);
    ++cliente;
    assert(cliente.pagoTotal == 250);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 26);
    ++cliente;
    assert(cliente.pagoTotal == 260);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 27);
    ++cliente;
    assert(cliente.pagoTotal == 270);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 28);
    ++cliente;
    assert(cliente.pagoTotal == 280);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 29);
    ++cliente;
    assert(cliente.pagoTotal == 290);
    
    resultado = cliente << libroSolicitado;
    assert(resultado);
    assert(cliente.cantDeLibros == 30);
    ++cliente;
    assert(cliente.pagoTotal == 300);
    
    resultado = cliente << libroSolicitado;
    assert(resultado == false);
    assert(cliente.cantDeLibros == 30);    
    
    cout<<cliente;
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