#ifndef PUNTO_HPP
#define PUNTO_HPP

struct TPunto {
    int x;
    int y;
};

void actualiza_punto(TPunto &p, int x = 0, int y = 0);

void imprime_punto(TPunto p);

#endif /* PUNTO_HPP */

