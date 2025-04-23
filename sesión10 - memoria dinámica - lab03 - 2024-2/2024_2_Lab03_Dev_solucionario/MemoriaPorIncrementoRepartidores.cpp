#include <cstring>
#include "MemoriaPorIncrementoRepartidores.hpp"
#include "Comunes.hpp"
#define TAMANHO_INCREMENTO_REPARTIDOR 5

void inicializar_repartidores(char ***&repartidores, int &capacidad_repartidores) {
    capacidad_repartidores = TAMANHO_INCREMENTO_REPARTIDOR;
    repartidores = new char**[capacidad_repartidores];
    for (int i = 0; i < capacidad_repartidores; i++)
        repartidores[i] = nullptr;
}

int incluir_repartidor(char ***&repartidores, int &i, int &capacidad_repartidores, char *codigo_repartidor, char *nombre_repartidor) {
    bool existe_repartidor;
    int indice_repartidor;
    buscar_repartidor(repartidores, codigo_repartidor, existe_repartidor, indice_repartidor);
    if (not existe_repartidor) {
        indice_repartidor = i;
        if (i == capacidad_repartidores - 1)
            incrementar_espacio_repartidores(repartidores, capacidad_repartidores);

        char **bloque_repartidor = new char*[2];
        bloque_repartidor[0] = mi_strdup(codigo_repartidor);
        bloque_repartidor[1] = mi_strdup(nombre_repartidor);
        repartidores[i] = bloque_repartidor;
        i++;
    }
    return indice_repartidor;
}

void incrementar_espacio_repartidores(char ***&repartidores, int &capacidad_repartidores){
    char ***repartidores_anterior = repartidores;
    int capacidad_repartidores_anterior = capacidad_repartidores;
    
    capacidad_repartidores += TAMANHO_INCREMENTO_REPARTIDOR;
    repartidores = new char**[capacidad_repartidores];
    for(int i=0; i<capacidad_repartidores; i++)
        if (i<capacidad_repartidores_anterior)
            repartidores[i] = repartidores_anterior[i];
        else
            repartidores[i] = nullptr;
    delete [] repartidores_anterior;
}

void buscar_repartidor(char ***repartidores, char *codigo_repartidor_llave, bool &existe_repartidor, int &indice_repartidor) {
    existe_repartidor = false;
    indice_repartidor = 0;
    while (repartidores[indice_repartidor] != nullptr) {
        char **bloque_repartidor = repartidores[indice_repartidor];
        char *codigo_repartidor_bloque = bloque_repartidor[0];
        if (strcmp(codigo_repartidor_llave, codigo_repartidor_bloque) == 0) {
            existe_repartidor = true;
            return;
        }
        indice_repartidor++;
    }
}

void incluir_fin_repartidor(char ***&repartidores, int &i, int &capacidad_repartidores){
    if (i==capacidad_repartidores)
        incrementar_espacio_repartidores(repartidores, capacidad_repartidores);
    repartidores[i] = nullptr;
}