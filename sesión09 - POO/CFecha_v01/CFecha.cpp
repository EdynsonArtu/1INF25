#include <iostream>
#include "CFecha.hpp"

using namespace std;

void CFecha::imprimir() {
    cout << this->dia << "/" << this->mes << "/" << this->anho << endl;
}

bool CFecha::es_bisiesto(){
    bool p = (this->anho % 4) == 0;
    bool q = (this->anho % 100) == 0;
    bool r = (this->anho % 400) == 0;
    return p and (not q or r);
}

void CFecha::incrementa_dia(){
    this->dia++;
    if (this->dia > this->obtener_dias_por_mes()){
        this->dia = 1;
        this->mes++;
        if (this->mes==13){
            this->mes = 1;
            this->anho++;
        }
    }
}

int CFecha::obtener_dias_por_mes(){
    int maximo_por_mes;
    switch(this->mes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            maximo_por_mes=31;
            break;
        case 4: case 6: case 9: case 11:
            maximo_por_mes=31;
            break;
        case 2: maximo_por_mes=28;
        if (this->es_bisiesto())
            maximo_por_mes++;
    }
    return maximo_por_mes;
}

void CFecha::setDia(int dia) {
    if (dia > 0 and dia < 32) {
        this->dia = dia;
    }
}

void CFecha::setMes(int mes) {
    if (mes > 0 and mes < 13) {
        this->mes = mes;
    }
}

void CFecha::setAnho(int anho) {
    this->anho = anho;
}

int CFecha::getDia() {
    return this->dia;
}

int CFecha::getMes() {
    return this->mes;
}

int CFecha::getAnho() {
    return this->anho;
}