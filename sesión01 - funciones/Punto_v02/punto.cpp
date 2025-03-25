#include <iostream>
#include "punto.hpp"

using namespace std;

void actualiza_punto(TPunto &p, int x, int y) {
    p.x = x;
    p.y = y;
}

void imprime_punto(TPunto p) {
    cout << "(" << p.x << "," << p.y << ")";
}