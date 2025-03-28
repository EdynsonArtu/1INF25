#include <fstream>
#include "conjunto.hpp"

using namespace std;

void cargar_conjunto_de_puntos(char *nombre, ConjuntoDatosPuntos &conjunto) {
    ifstream arch(nombre, ios::in);
    if (not arch.is_open()) {
        cout << "No se puede abrir el archivo" << endl;
        exit(10);
    }
    conjunto.cantidad = 0;
    //while (not arch.eof())
    //    arch >> conjunto.valores[conjunto.cantidad++];
    while (not arch.eof()) {
        TPunto punto;
        arch >> punto;
        conjunto.valores[conjunto.cantidad] = punto;
        conjunto.cantidad++;
    };
    arch.close();
}

void imprimir_conjunto_de_puntos(ConjuntoDatosPuntos conjunto) {
    for (int i = 0; i < conjunto.cantidad; i++)
        cout << conjunto.valores[i] << " ";
}
