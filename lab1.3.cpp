#include "iostream"
#include "Complex.h"

int main()
{
    cout << "initialization of A" << endl;
    Complex A;
    A.Read();
    A.Display();
    cout << "A = " << A.toString() << endl;

    cout << "initialization of B" << endl;
    Complex B;
    B.Read();
    B.Display();
    cout << "B = " << B.toString() << endl;

    cout << "Sum of complex numbers" << endl;
    Complex C;
    C = Add(A, B);
    C.Display();
    cout << "C = " << C.toString() << endl;

    cout << "Product of complex numbers" << endl;
    Complex D;
    D = Mul(A, B);
    D.Display();
    cout << "D = " << D.toString() << endl;

    if (Equ(A, B))
        cout << "Complex numbers are equal" << endl;
    else
        cout << "Complex numbers are not equal" << endl;
}
