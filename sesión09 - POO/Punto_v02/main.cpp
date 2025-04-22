#include <iostream>
#include <cmath>
#include <assert.h>
#include "CPunto2D.hpp"

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    return 0;
}

void test06() {
    CPunto2D p1, p2;
    assert(p1.getX() == 0);
    assert(p1.getY() == 0);
    assert(p2.getX() == 0);
    assert(p2.getY() == 0);
    
    p1 = CPunto2D(2,1);
    p2 = CPunto2D(-3,2);
    
    assert(p1.getX() == 2);
    assert(p1.getY() == 1);
    assert(p2.getX() == -3);
    assert(p2.getY() == 2);
}

void test05() {
    CPunto2D p1(2,1), p2(-3,2);
    assert(p1.getX() == 2);
    assert(p1.getY() == 1);
    assert(p2.getX() == -3);
    assert(p2.getY() == 2);
}

void test04() {
    CPunto2D p;
    assert(p.getX() == 0);
    assert(p.getY() == 0);
}

void test03() {
    CPunto2D p1, p2;

    p1.setX(2);
    p1.setY(1);
    p2.setX(-3);
    p2.setY(2);
    assert(p1.distancia(p2) == sqrt(26));

    p1.setX(1);
    p1.setY(7);
    p2.setX(1);
    p2.setY(2);
    assert(p1.distancia(p2) == 5);
}

void test02() {
    CPunto2D p1, p2;

    p1.setX(15);
    p1.setY(35);
    assert(p1.getX() == 15);
    assert(p1.getY() == 35);

    p2.setX(10);
    p2.setY(50);
    assert(p2.getX() == 10);
    assert(p2.getY() == 50);

    p1.imprimir();
    p2.imprimir();
}

void test01() {
    CPunto2D p1;

    //El siguiente código romple el encapsulamiento
    //no se puede utilizar.
    //p1.x = 10;
    //p1.y = 20;
    p1.setX(10);
    p1.setY(20);

    assert(p1.getX() == 10);
    assert(p1.getY() == 20);
}







