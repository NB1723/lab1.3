#pragma once
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Complex
{
private:
	double x, y;

public:
	double GetRe() const { return x; }
	double GetIm() const { return y; }

	void SetRe(double value) { x = value; }
	void SetIm(double value) { y = value; }

	void Init(double, double);
	void Read();
	void Display() const;
	string toString();

	friend Complex Add(Complex Z1, Complex Z2);
	friend Complex Mul(Complex Z1, Complex Z2);
	friend bool Equ(Complex Z1, Complex Z2);
};
