#include <iostream>

using namespace std;

int suma(int a, int b);
int resta(int a, int b);
int multiplica(int a, int b);
int ejecuta_operacion(int a, int b, int(*operacion)(int, int));

double promedio1(int p1, int p2, int p3, int p4, int p5, int ex1, int ex2);
double promedio2(int p1, int p2, int p3, int p4, int p5, int ex1, int ex2);
double promedio3(int p1, int p2, int p3, int p4, int p5, int ex1, int ex2);

void test01();
void test02();
void test03();

int main(int argc, char** argv) {
    //test01();
    //test02();
    test03();
    return 0;
}

void test03() {
    double (*arreglo[3])(int, int, int, int, int, int, int);
    arreglo[0] = promedio1;
    arreglo[1] = promedio2;
    arreglo[2] = promedio3;

    for (int i = 0; i < 3; i++) {
        double promedio = (*arreglo[i])(11, 12, 13, 14, 15, 18, 10);
        cout << promedio << endl;
    }
}

void test02() {
    double (*ptrFun)(int, int, int, int, int, int, int);
    ptrFun = promedio3;
    double promedio = (*ptrFun)(11, 12, 13, 14, 15, 18, 10);
    cout << "El promedio es: " << promedio << endl;
}

double promedio1(int p1, int p2, int p3, int p4, int p5, int ex1, int ex2) {
    return ((p1 + p2 + p3 + p4 + p5) / (double) 5 + ex1 + ex2) / 3;
}

double promedio2(int p1, int p2, int p3, int p4, int p5, int ex1, int ex2) {
    return ((p1 + p2 + p3 + p4 + p5) / (double) 5 + 2 * ex1 + 3 * ex2) / 6;
}

double promedio3(int p1, int p2, int p3, int p4, int p5, int ex1, int ex2) {
    return ((p1 + p2 + p3 + p4 + p5) / (double) 5 + 4 * ex1 + 3 * ex2) / 8;
}

void test01() {
    cout << "resultado: " << ejecuta_operacion(10, 20, multiplica);
}

int suma(int a, int b) {
    return a + b;
}

int multiplica(int a, int b) {
    return a*b;
}

int resta(int a, int b) {
    return a - b;
}

int ejecuta_operacion(int a, int b, int(*operacion)(int, int)) {
    return (*operacion)(a, b);
}