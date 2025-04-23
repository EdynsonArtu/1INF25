#include "ConjuntoDeRepartidores.hpp"
#include "MemoriaPorIncrementoRepartidores.hpp"
#include "MemoriaPorIncrementoClientes.hpp"
#include "MemoriaPorIncrementoSubTotales.hpp"

void cargar_estructuras(char ***&repartidores, int ***&clientes, double ***&subtotales, char ***cadenas, int **enteros, double **reales) {
    ConjuntoDeRepartidores conjuntoDeRepartidores;
    cargar_conjunto_de_repartidores(conjuntoDeRepartidores, "repartidores.csv");

    int capacidad_repartidores, capacidad_clientes, capacidad_subtotales;
    inicializar_repartidores(repartidores, capacidad_repartidores);
    inicializar_clientes(clientes, capacidad_clientes);
    inicializar_subtotales(subtotales, capacidad_subtotales);
    int i = 0;
    while (*cadenas) {
        char **bloque_cadenas = *cadenas;
        int *bloque_enteros = *enteros;
        double *bloque_reales = *reales;

        char *codigo_repartidor = bloque_cadenas[0];
        char *nombre_repartidor = conjuntoDeRepartidores == codigo_repartidor;
        int dni = bloque_enteros[0];
        double subtotal = bloque_reales[0];

        int indice_repartidor = incluir_repartidor(repartidores, i, capacidad_repartidores, codigo_repartidor, nombre_repartidor);
        
        cadenas++;
        enteros++;
        reales++;
    }
    incluir_fin_repartidor(repartidores, i, capacidad_repartidores);
}

void reporte_de_repartidores(const char*nombre_archivo, char ***repartidores, int ***clientes, double ***subtotales) {

}

void reporte_por_repartidor(char ***repartidores, int ***clientes, double ***subtotales) {

}