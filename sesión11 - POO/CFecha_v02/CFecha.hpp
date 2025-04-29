#ifndef CFECHA_HPP
#define CFECHA_HPP

class CFecha{
private:
    int dia;
    int mes;
    int anho;
public:
    CFecha();
    
    CFecha(int dia, int mes, int anho);
    
    void imprimir();
    
    bool es_bisiesto();
    
    bool es_bisiesto(int anho);
    
    void incrementa_dia();
    
    void setDia(int dia);
    
    void setMes(int mes);
    
    void setAnho(int anho);
    
    int getDia();
    
    int getMes();
    
    int getAnho();
private:    
    int obtener_dias_por_mes();
    
    int obtener_dias_por_mes(int mes, int anho);
    
    void setear_fecha_por_defecto();
    
    bool es_fecha_valida(int dia, int mes, int anho);
    
    bool es_mes_valido(int mes);
    
    bool es_dia_valido(int dia, int mes, int anho);
    
};

#endif /* CFECHA_HPP */

