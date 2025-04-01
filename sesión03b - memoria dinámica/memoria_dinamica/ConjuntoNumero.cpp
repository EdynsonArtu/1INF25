#include "ConjuntoNumero.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void leer_con_asignacion_exacta(ConjuntoNumeros &conjunto, const char *nombreDeArchivo) {
    ifstream archivoNumeros(nombreDeArchivo, ios::in);

    if (not archivoNumeros.is_open()) {
        cout << "No se ha podido aperturar el archivo " << nombreDeArchivo << endl;
        exit(10);
    }

    //paso 1. Se define un buffer de memoria
    int buffer[50];

    //paso 2: Se leen los datos en el buffer
    int i = 0, dato;
    while (true) {
        archivoNumeros >> dato;
        if (archivoNumeros.eof())
            break;
        buffer[i] = dato;
        i++;
    }

    //paso 3: se crea un bloque de memoria dinámica
    conjunto.conjunto = new int[i];
    conjunto.cantidad = i;

    //paso 4: copiar del buffer al bloque dinámico
    for (i = 0; i < conjunto.cantidad; i++)
        conjunto.conjunto[i] = buffer[i];

    archivoNumeros.close();
}

void leer_con_incremento_en_uno(ConjuntoNumeros &conjunto, const char *nombreDeArchivo) {
    ifstream archivoNumeros(nombreDeArchivo, ios::in);

    if (not archivoNumeros.is_open()) {
        cout << "No se ha podido aperturar el archivo " << nombreDeArchivo << endl;
        exit(10);
    }

    //paso 1: se define un bloque de tamaño cero
    conjunto.cantidad = 0;
    conjunto.conjunto = nullptr;

    //paso 2: para cada dato que se lea
    int dato;
    while (true) {
        archivoNumeros >> dato;
        if (archivoNumeros.eof())
            break;
        //paso 2A: incremento el tamaño en uno
        //paso 2B paso 2C: se copian los datos del bloque antiguo 
        //al bloque nuevo y se libera memoria
        ++conjunto;

        conjunto << dato;
    }
    archivoNumeros.close();
}

void operator++(ConjuntoNumeros &conjunto) {
    int *bloque_antiguo = conjunto.conjunto;
    conjunto.cantidad++;
    conjunto.conjunto = new int [conjunto.cantidad];

    for (int i = 0; i < conjunto.cantidad - 1; i++)
        conjunto.conjunto[i] = bloque_antiguo[i];

    delete [] bloque_antiguo;
}

void operator<<(ConjuntoNumeros &conjunto, int dato) {
    conjunto.conjunto[conjunto.cantidad - 1] = dato;
}

void imprimir_numeros(ConjuntoNumeros conjunto) {
    for (int i = 0; i < conjunto.cantidad; i++)
        cout << setw(8) << conjunto.conjunto[i] << endl;
}

void libera_memoria_del_conjunto(ConjuntoNumeros &conjunto) {
    delete [] conjunto.conjunto;
    conjunto.conjunto = nullptr;
}