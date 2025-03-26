#include <iostream>
#include "punto.hpp"

using namespace std;

void actualiza_punto(TPunto &p, int x, int y) {
    p.x = x;
    p.y = y;
}

//void imprime_punto(TPunto p) {
//    cout << "(" << p.x << "," << p.y << ")";
//}

void suma(TPunto &p1, TPunto p2) {
    p1.x += p2.x;
    p1.y += p2.y;
}

void suma(TPunto &p1, int x, int y) {
    p1.x += x;
    p1.y += y;
}

void incrementa(TPunto &p) {
    p.x++;
    p.y++;
}

void operator++(TPunto &p) {
    incrementa(p);
}

void operator++(TPunto &p, int) {
    incrementa(p);
}

ostream & operator<<(ostream &os, const TPunto &p) {
    os << "(" << p.x << "," << p.y << ")";
    return os;
}

void imprime_punto(TPunto p) {
    cout << "(" << p.x << "," << p.y << ")";
}

bool operator==(const TPunto &p1, const TPunto &p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

TPunto operator+(const TPunto &p1, const TPunto &p2) {
    TPunto p3;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    return p3;
}






