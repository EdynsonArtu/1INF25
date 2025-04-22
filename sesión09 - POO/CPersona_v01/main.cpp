#include <iostream>
#include <cstring>
#include "CPersona.hpp"

using namespace std;

int main(int argc, char** argv) {
    CPersona persona;
    char paterno[100];
    char materno[100];
    char nombre[100];
    
    strcpy(paterno, "Melgar");
    strcpy(materno, "Sasieta");
    strcpy(nombre, "Héctor Andrés");
    
    persona.setPaterno(paterno);
    persona.setMaterno(materno);
    persona.setNombre(nombre);
    persona.imprimir();
        
    strcpy(nombre, "Roberto Eduardo");
    persona.imprimir();
    
    char *crack_nombre = persona.getMaterno();
    strcpy(crack_nombre, "Guanira");
    persona.imprimir();
    
    return 0;
}

