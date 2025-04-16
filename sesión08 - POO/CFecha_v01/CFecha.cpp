#include "CFecha.hpp"

void CFecha::setDia(int dia) {
    if (dia>0 and dia<32){
        this->dia = dia;
    }        
}

void CFecha::setMes(int mes) {
    if (mes>0 and mes<13){
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