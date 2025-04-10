#include <cstring>
#include "Estructuras.h"
#include "AperturaDeArchivos.h"
#include "libro.hpp"

void cargar_libros(Libro arregloLibro[300], const char*nombreArchivo){        
    Libro libro;    

    ifstream archivoLibro;
    AperturaDeUnArchivoDeTextosParaLeer(archivoLibro, nombreArchivo);
    int i = 0;
    while (archivoLibro >> libro) {
        arregloLibro[i] = libro;
        i++;
    }
    strcpy(arregloLibro[i].codigo, "FIN");
    archivoLibro.close();    
}