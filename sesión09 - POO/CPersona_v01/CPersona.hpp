#ifndef CPERSONA_HPP
#define CPERSONA_HPP

class CPersona{
private:
    char *paterno;
    char *materno;
    char *nombre;
public:
    void imprimir();
    
    void setPaterno(char *paterno);
    
    void setMaterno(char *materno);
    
    void setNombre(char *nombre);
    
    char *getPaterno();
    
    char *getMaterno();
    
    char *getNombre();
};

#endif /* CPERSONA_HPP */

