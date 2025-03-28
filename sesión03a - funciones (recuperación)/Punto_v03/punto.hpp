#ifndef PUNTO_HPP
#define PUNTO_HPP
#include <iostream>
#include <fstream>

using namespace std;

struct TPunto {
    int x;
    int y;
};

void actualiza_punto(TPunto &p, int x = 0, int y = 0);

//void imprime_punto(TPunto p);

void suma(TPunto &p1, TPunto p2);

void suma(TPunto &p1, int x, int y);

void incrementa(TPunto &p);

void operator++(TPunto &p);

void operator++(TPunto &p, int);

ostream & operator<<(ostream &os, const TPunto &p);

bool operator==(const TPunto &p1, const TPunto &p2);

TPunto operator+(const TPunto &p1, const TPunto &p2);

ifstream & operator>>(ifstream & arch, TPunto &p);

#endif /* PUNTO_HPP */

