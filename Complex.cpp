#include <iostream>
#include "Complex.h"
using namespace std;

void Complex::Display() const
{
    cout << endl;
    cout << " Re = " << x << endl;
    cout << " Im = " << y << endl;
}

void Complex::Init(double a, double b)
{
    x = a;
    y = b;
}

void Complex::Read()
{
    double x, y;
    cout << "Input complex value:" << endl;
    cout << " Re = "; cin >> x;
    cout << " Im = "; cin >> y;
    Init(x, y);
}

string Complex::toString()
{
    stringstream sout;
    sout << x << " + i * " << y << endl;
    return sout.str();
}

Complex Add(Complex Z1, Complex Z2)
{
    Complex tmp;
    tmp.x = Z1.x + Z2.x;
    tmp.y = Z1.y + Z2.y;
    return tmp;
}

Complex Mul(Complex Z1, Complex Z2)
{
    Complex tmp;
    tmp.x = (Z1.x * Z2.x) - (Z1.y * Z2.y);
    tmp.y = (Z1.x * Z2.y) + (Z2.x * Z1.y);
    return tmp;
}

bool Equ(Complex Z1, Complex Z2)
{
    if (Z1.x == Z2.x && Z1.y == Z2.y)
        return true;
    else
        return false;
}
