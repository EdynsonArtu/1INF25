#include "ConjuntoNombres.hpp"
#include "ConjuntoNumero.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

void leer_con_incrementos(ConjuntoNombres &conjunto, const char* nombreDeArchivo) {
    //hemos notado que el código de apertura es muy, pero muy similar al 
    //código de ConjuntoNumeros ==> se debe refactorizar
    //lo haremos en la siguiente sesión
    ifstream archivoNombres(nombreDeArchivo, ios::in);

    if (not archivoNombres.is_open()) {
        cout << "No se ha podido aperturar el archivo " << nombreDeArchivo << endl;
        exit(10);
    }

    //paso 1: se define un bloque de tamaño inicial
    conjunto.conjunto = new char*[TAMANHO_INICIAL];
    conjunto.cantidad = 0;
    conjunto.capacidad = TAMANHO_INICIAL;

    char nombre[100]; //va a ser el buffer del nombre. Asumo que no hay nombres de tamañor mayor a 99.
    while (not archivoNombres.eof()) {
        //paso 2A: para cada dato que se lea
        archivoNombres >> nombre;
        //paso 2A1: en caso sea necesario, incrementamos el bloque.
        //paso 2A2: en caso sea necesario, copiamos al nuevo bloque
        //paso 2A3: en caso sea necesario, eliminamos el bloque antiguo
        //paso 2A4: en caso sea necesario, referenciamos al bloque nuevo
        ++conjunto;
        //paso 2B: copimos el dato al bloque
        conjunto << nombre;
    }

    archivoNombres.close();
}

void operator++(ConjuntoNombres &conjunto) {
    conjunto.cantidad++;
    
    if (conjunto.cantidad > conjunto.capacidad) {
        char **bloque_antiguo = conjunto.conjunto;
        
        //paso 2A1: en caso sea necesario, incrementamos el bloque.
        conjunto.capacidad += TAMANHO_BLOQUE;
        conjunto.conjunto = new char*[conjunto.capacidad];
        
        //paso 2A2: en caso sea necesario, copiamos al nuevo bloque
        for (int i=0; i<conjunto.cantidad-1; i++)
            conjunto.conjunto[i] = bloque_antiguo[i];
        
        //paso 2A3: en caso sea necesario, eliminamos el bloque antiguo
        delete [] bloque_antiguo;
    }
}

void operator<<(ConjuntoNombres &conjunto, char *nombre) {
    conjunto.conjunto[conjunto.cantidad - 1] = new char[strlen(nombre) + 1];
    strcpy(conjunto.conjunto[conjunto.cantidad - 1], nombre);
}
