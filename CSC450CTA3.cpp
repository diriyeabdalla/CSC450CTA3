#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three integer values: ";
    cin >> a >> b >> c;

    int *ptrA = new int(a);
    int *ptrB = new int(b);
    int *ptrC = new int(c);

    cout << "Value of a: " << a << ", Pointer: " << ptrA << ", Pointed value: " << *ptrA << endl;
    cout << "Value of b: " << b << ", Pointer: " << ptrB << ", Pointed value: " << *ptrB << endl;
    cout << "Value of c: " << c << ", Pointer: " << ptrC << ", Pointed value: " << *ptrC << endl;

    delete ptrA;
    delete ptrB;
    delete ptrC;

    return 0;
}
