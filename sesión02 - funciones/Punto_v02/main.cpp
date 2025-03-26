#include <iostream>
#include <assert.h>
#include "punto.hpp"

using namespace std;

int main(int argc, char** argv) {
    TPunto p1 = {23, 45};

    actualiza_punto(p1);
    //imprime_punto(p1);
    cout << p1;
    assert(p1.x == 0 && p1.y == 0);

    actualiza_punto(p1, 29, 11);
    //imprime_punto(p1);
    cout << p1;
    assert(p1.x == 29 && p1.y == 11);

    actualiza_punto(p1, 67);
    //imprime_punto(p1);
    cout << p1;
    assert(p1.x == 67 && p1.y == 0);

    TPunto p2;
    actualiza_punto(p2, 15, 24);
    suma(p1, p2);
    assert(p1.x == 67 + 15 && p1.y == 0 + 24);

    suma(p1, 10, 20);
    assert(p1.x == 67 + 15 + 10 && p1.y == 0 + 24 + 20);

    incrementa(p1);
    assert(p1.x == 67 + 15 + 10 + 1 && p1.y == 0 + 24 + 20 + 1);

    ++p1;
    assert(p1.x == 67 + 15 + 10 + 1 + 1 && p1.y == 0 + 24 + 20 + 1 + 1);

    p1++;
    assert(p1.x == 67 + 15 + 10 + 3 && p1.y == 0 + 24 + 20 + 3);

    bool iguales = p1 == p2;
    assert(iguales == false);

    TPunto p3 = {23, 45}, p4 = {23, 45};
    iguales = p3 == p4;
    assert(iguales == true);

    TPunto p5 = p3 + p4;
    assert(p5.x == 46 && p5.y == 90);
    return 0;
}

