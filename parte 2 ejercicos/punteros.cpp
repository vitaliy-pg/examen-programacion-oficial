#include <iostream>
using namespace std;

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5;
    int y = 10;
    cout << "Valores originales:" <<endl;
    cout << "x = " << x << ", y = " << y <<endl;

    intercambiar(&x, &y);

    cout << "Valores intercambiados:" <<endl;
    cout << "x = " << x << ", y = " << y <<endl;

    return 0;
}
