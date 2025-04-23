#include "MemoriaPorIncrementoClientes.hpp"
#define TAMANHO_INCREMENTO_CLIENTE 5

void inicializar_clientes(int ***&clientes, int &capacidad_clientes){
    capacidad_clientes = TAMANHO_INCREMENTO_CLIENTE;
    clientes = new int**[capacidad_clientes];
    for(int i=0; i<capacidad_clientes; i++)
        clientes[i] = nullptr;
}