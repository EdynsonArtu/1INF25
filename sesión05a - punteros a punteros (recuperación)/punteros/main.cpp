#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a = 10;
    cout << a << endl;

    int *p = &a;
    cout << p << endl;
    cout << &a << endl;
    *p = 20;
    cout << a << endl;
    cout << &p << endl;
    return 0;
}

