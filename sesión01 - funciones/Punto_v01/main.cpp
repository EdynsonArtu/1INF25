#include <iostream>
#include <assert.h>

using namespace std;

struct TPunto {
    int x;
    int y;
};

/*void inicializa_en_origen(TPunto &p) {
    p.x = 0;
    p.y = 0;
}*/

void actualiza_punto(TPunto &p, int x = 0, int y = 0) {
    p.x = x;
    p.y = y;
}

void imprime_punto(TPunto p) {
    cout << "(" << p.x << "," << p.y << ")";
}

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

