#include <iostream>
#include <fstream>
using namespace std;


class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex& com);
	Complex add(const Complex& i1)const;
	Complex sub(const Complex& i1)const;
	Complex& prod(int);
	Complex& div(int);
	void get();
	void print(ostream&cout);
};