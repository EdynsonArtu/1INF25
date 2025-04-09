#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include "Estructuras.h"
#include "libro.hpp"

using namespace std;

bool operator>>(ifstream &archivo, Libro &libro) {
    archivo.getline(libro.codigo, 8, ',');
    if (archivo.eof())
        return false;
    archivo.getline(libro.titulo, 80, ',');
    archivo.getline(libro.autor, 60, ',');
    archivo >> libro.stock;
    archivo.get(); //sacamos la coma
    archivo >> libro.precio;
    //leemos el cambio de línea. Si es que usan MAC deben hacer este cambio
    char buffer[255];
    archivo.getline(buffer, 255);
    return true;
}

ostream & operator<<(ostream &out, const Libro &libro) {
    out << left << setw(8) << libro.codigo;
    out << left << setw(80) << libro.titulo;
    out << left << setw(60) << libro.autor;
    out << right << setw(10) << libro.stock;
    out << right << setw(10) << setprecision(2) << fixed << libro.precio;
    return out;
}

//implementación mediante búsqueda secuencial
int buscar_libro(char *codigo, Libro arregloLibro[]){
    int i=0;
    while (true){
        Libro libro = arregloLibro[i];
        if (strcmp(libro.codigo, "FIN")==0)
            return LIBRO_NO_ENCONTRADO;
        else if (strcmp(libro.codigo, codigo)==0)
            return i;
        i++;
    }
}