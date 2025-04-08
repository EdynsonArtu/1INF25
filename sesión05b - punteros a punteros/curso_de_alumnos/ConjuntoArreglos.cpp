#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include "ConjuntoArreglos.hpp"

using namespace std;

void cargar_conjunto_de_arreglos(ConjuntoArreglos &conjunto, const char *nombre_archivo) {
    ifstream archivo(nombre_archivo, ios::in);
    if (not archivo.is_open()) {
        cout << "El archivo no se ha podido aperturar" << endl;
        exit(10);
    }

    int i = 0;
    int buffer_codigo[50];
    char *buffer_nombre[50];
    char **buffer_cursos[50];

    while (true) {
        archivo >> buffer_codigo[i];
        if (archivo.eof())
            break;
        archivo.get(); //sacamos la coma
        buffer_nombre[i] = sacar_nombre(archivo);
        buffer_cursos[i] = sacar_cursos(archivo);
        i++;
    }

    conjunto.cantidad = i;
    conjunto.codigo = new int[conjunto.cantidad];
    conjunto.nombre = new char*[conjunto.cantidad];
    conjunto.cursos = new char**[conjunto.cantidad];
    for (i = 0; i < conjunto.cantidad; i++) {
        conjunto.codigo[i] = buffer_codigo[i];
        conjunto.nombre[i] = buffer_nombre[i];
        conjunto.cursos[i] = buffer_cursos[i];
    }
    archivo.close();
}

char** sacar_cursos(ifstream &archivo) {
    char *buffer_cursos[100];
    int cantidad = 1;
    while (true) {
        char *curso = new char[7];
        archivo.get(curso, 7);
        buffer_cursos[cantidad - 1] = curso;
        cantidad++;
        char c = archivo.get();
        if (c == '\n' or c == 13)
            break;
    }
    buffer_cursos[cantidad - 1] = nullptr;
    char **cursos = new char*[cantidad];
    for (int i = 0; i < cantidad; i++)
        cursos[i] = buffer_cursos[i];
    return cursos;
}

char* sacar_nombre(ifstream &archivo) {
    char buffer_cadena[100];
    archivo.getline(buffer_cadena, 100, ',');
    //return buffer_cadena; //super mal //graves errores de concepto
    //voy a clonarlo en el heap
    char *cadena;
    cadena = new char[strlen(buffer_cadena) + 1];
    strcpy(cadena, buffer_cadena);
    return cadena;
}

void reporte_alumnos_matriz(ConjuntoArreglos conjunto, const char *nombre_archivo) {
    ofstream archivo(nombre_archivo, ios::out);
    for (int i = 0; i < conjunto.cantidad; i++) {
        archivo << conjunto.codigo[i] << " " << conjunto.nombre[i] << endl;
        for (int j = 0; conjunto.cursos[i][j]; j++) {
            archivo << setw(15) << conjunto.cursos[i][j] << endl;
        }
    }
    archivo.close();
}

void reporte_alumnos(ConjuntoArreglos conjunto, const char *nombre_archivo) {
    ofstream archivo(nombre_archivo, ios::out);
    for (int i = 0; i < conjunto.cantidad; i++) {
        archivo << conjunto.codigo[i] << " " << conjunto.nombre[i] << endl;
        char** recorrido_cursor = conjunto.cursos[i];
        for (int j = 0; recorrido_cursor[j]; j++) {
            archivo << setw(15) << recorrido_cursor[j] << endl;
        }
    }
    archivo.close();
}