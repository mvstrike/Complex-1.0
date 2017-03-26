#include "Complex.h"

Complex::Complex() : real(0), imaginary(0)
{}

Complex::Complex(double val, double i) : real(val), imaginary(i)
{}

Complex::Complex(const Complex& com)
{
	real = com.real;
	imaginary = com.imaginary;
}

Complex Complex::add(const Complex& obj1)const
{
	Complex cur;
	cur.real = obj1.real + real;
	cur.imaginary = obj1.imaginary + imaginary;
	return cur;
}

Complex& Complex::prod(int number)
{
	real *= number;
	return *this;
}

Complex Complex::sub(const Complex& obj1)const
{
	Complex cur;
	cur.real = real - obj1.real;
	cur.imaginary = imaginary - obj1.imaginary;
	return cur;
}


Complex& Complex::div(int num)
{
	real /= num;
	return *this;
}


void Complex::get()
{
	cout << "Real: " << endl;
	cin >> real;
	cout << "Imaginary: " << endl;
	cin >> imaginary;
	cout << endl;
}

void Complex::print(ostream&cout)
{
	if (imaginary < 0)
	{
		cout << real << imaginary << "i" << endl;
	}
	else
		cout << real << "+" << imaginary << "i" << endl;
}
