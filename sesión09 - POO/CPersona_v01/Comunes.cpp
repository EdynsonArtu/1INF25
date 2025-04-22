#include "Comunes.hpp"
#include <cstring>

char *mi_strdup(char *cadena){
    char *resultado = new char[strlen(cadena)+1];
    strcpy(resultado, cadena);
    return resultado;
}