#include <iostream>
#include <assert.h>
#include "punto.hpp"

using namespace std;

int main(int argc, char** argv) {
    TPunto p1 = {23, 45};

    actualiza_punto(p1);
    imprime_punto(p1);
    assert(p1.x == 0 && p1.y == 0);

    actualiza_punto(p1, 29, 11);
    imprime_punto(p1);
    assert(p1.x == 29 && p1.y == 11);
    
    actualiza_punto(p1, 67);
    imprime_punto(p1);
    assert(p1.x == 67 && p1.y == 0);
    return 0;
}

