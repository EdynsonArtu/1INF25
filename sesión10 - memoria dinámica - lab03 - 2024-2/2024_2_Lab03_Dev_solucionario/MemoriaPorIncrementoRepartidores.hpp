#ifndef MEMORIAPORINCREMENTOREPARTIDORES_HPP
#define MEMORIAPORINCREMENTOREPARTIDORES_HPP

void inicializar_repartidores(char ***&repartidores, int &capacidad_repartidores);

int incluir_repartidor(char ***&repartidores, int &i, int &capacidad_repartidores, char *codigo_repartidor, char *nombre_repartidor);

void incrementar_espacio_repartidores(char ***&repartidores, int &capacidad_repartidores);

void buscar_repartidor(char ***repartidores, char *codigo_repartidor_llave, bool &existe_repartidor, int &indice_repartidor);

void incluir_fin_repartidor(char ***&repartidores, int &i, int &capacidad_repartidores);

#endif /* MEMORIAPORINCREMENTOREPARTIDORES_HPP */

