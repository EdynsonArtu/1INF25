#include <iostream>
#include "CFecha.hpp"

using namespace std;

CFecha::CFecha() {
    this->setear_fecha_por_defecto();
}

CFecha::CFecha(int dia, int mes, int anho) {
    if (this->es_fecha_valida(dia, mes, anho)) {
        this->dia = dia;
        this->mes = mes;
        this->anho = anho;
    } else
        this->setear_fecha_por_defecto();
}

void CFecha::imprimir() {
    cout << this->dia << "/" << this->mes << "/" << this->anho << endl;
}

bool CFecha::es_bisiesto() {
   return this->es_bisiesto(this->anho);
}

bool CFecha::es_bisiesto(int anho){
    bool p = (anho % 4) == 0;
    bool q = (anho % 100) == 0;
    bool r = (anho % 400) == 0;
    return p and (not q or r);
}

void CFecha::incrementa_dia() {
    this->dia++;
    if (this->dia > this->obtener_dias_por_mes()) {
        this->dia = 1;
        this->mes++;
        if (this->mes == 13) {
            this->mes = 1;
            this->anho++;
        }
    }
}

int CFecha::obtener_dias_por_mes() {
    this->obtener_dias_por_mes(this->mes, this->anho);
}

int CFecha::obtener_dias_por_mes(int mes, int anho){
    int maximo_por_mes;
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            maximo_por_mes = 31;
            break;
        case 4: case 6: case 9: case 11:
            maximo_por_mes = 30;
            break;
        case 2: maximo_por_mes = 28;
            if (this->es_bisiesto(anho))
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

void CFecha::setear_fecha_por_defecto() {
    this->dia = 1;
    this->mes = 1;
    this->anho = 2000;
}

bool CFecha::es_fecha_valida(int dia, int mes, int anho) {
    if (not this->es_mes_valido(mes))
        return false;
    if (not this->es_dia_valido(dia, mes, anho))
        return false;
    return true;
}

bool CFecha::es_mes_valido(int mes) {
    return mes>=1 and mes<=12;
}

bool CFecha::es_dia_valido(int dia, int mes, int anho) {
    int maximo_dias_por_mes = this->obtener_dias_por_mes(mes, anho);
    return dia<=maximo_dias_por_mes;
}