#ifndef CFECHA_HPP
#define CFECHA_HPP

class CFecha{
private:
    int dia;
    int mes;
    int anho;
public:
    void imprimir();
    
    bool es_bisiesto();
    
    void incrementa_dia();
    
    void setDia(int dia);
    
    void setMes(int mes);
    
    void setAnho(int anho);
    
    int getDia();
    
    int getMes();
    
    int getAnho();
private:    
    int obtener_dias_por_mes();
};

#endif /* CFECHA_HPP */

