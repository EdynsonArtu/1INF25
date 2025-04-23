#include "MemoriaPorIncrementoSubTotales.hpp"
#define TAMANHO_INCREMENTO_SUBTOTALES 5

void inicializar_subtotales(double ***&subtotales, int &capacidad_subtotales) {
    capacidad_subtotales = TAMANHO_INCREMENTO_SUBTOTALES;
    subtotales = new double**[capacidad_subtotales];
    for (int i = 0; i < capacidad_subtotales; i++)
        subtotales[i] = nullptr;
}