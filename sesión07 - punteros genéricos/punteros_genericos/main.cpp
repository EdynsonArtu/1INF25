#include <iostream>

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();

int main(int argc, char** argv) {
    //test01();
    //test02();
    //test03();
    //test04();
    test05();
    return 0;
}

void test05() {
    void *q = new void*[3];
    void **p = (void**)q;
    p[0] = new char;
    p[1] = new int;
    p[2] = new double;
    *(char*) p[0] = 'A';
    *(int*) p[1] = 346;
    *(double*) p[2] = 17.98;
    cout << *(char*) p[0] << endl;
    cout << *(int*) p[1] << endl;
    cout << *(double*) p[2] << endl;
}

void test04() {
    void **p = new void*[3];
    p[0] = new char;
    p[1] = new int;
    p[2] = new double;
    *(char*) p[0] = 'A';
    *(int*) p[1] = 346;
    *(double*) p[2] = 17.98;
    cout << *(char*) p[0] << endl;
    cout << *(int*) p[1] << endl;
    cout << *(double*) p[2] << endl;
}

void test03() {
    void *p = new char;
    *(char*) p = 'A';
    cout << *(char*) p << endl;

    p = new int;
    *(int*) p = 346;
    cout << *(int*) p << endl;

    p = new double;
    *(double*) p = 17.98;
    cout << *(double*) p << endl;
}

void test02() {
    char *ptrC = new char;
    int *ptrE = new int;
    double *ptrR = new double;
    *ptrC = 'A';
    *ptrE = 346;
    *ptrR = 17.98;
    cout << *ptrC << endl;
    cout << *ptrE << endl;
    cout << *ptrR << endl;
}

void test01() {
    char c = 'A';
    int e = 346;
    double r = 17.98;
    char *ptrC = &c;
    int *ptrE = &e;
    double *ptrR = &r;
    cout << *ptrC << endl;
    cout << *ptrE << endl;
    cout << *ptrR << endl;
}
