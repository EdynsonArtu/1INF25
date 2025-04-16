#ifndef CFECHA_HPP
#define CFECHA_HPP

class CFecha{
private:
    int dia;
    int mes;
    int anho;
public:
    void setDia(int dia);
    
    void setMes(int mes);
    
    void setAnho(int anho);
    
    int getDia();
    
    int getMes();
    
    int getAnho();
};

#endif /* CFECHA_HPP */

