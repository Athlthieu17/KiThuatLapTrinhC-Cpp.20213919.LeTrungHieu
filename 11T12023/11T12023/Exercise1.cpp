#include <iostream>
#include <math.h>

using namespace std;

class Complex
{
	float real, imag;
public:
	Complex(float real = 0, float imag = 0)
	{
		this->real = real;
		this->imag = imag;
	}

	void setComplex(float real,float imag)
	{
		this->real = real;
		this->imag = imag;
	}
	void getComplex(float& real ,float& imag)
	{
		real = this->real;
		imag = this->imag;
	}

	Complex operator+(const Complex& b) const
	{
		Complex z(real + b.real, imag + b.imag);
		return z;
	}

	Complex operator-(const Complex& b) const
	{
		Complex z(real - b.real, imag - b.imag);
		return z;
	}

	Complex operator*(const Complex& b) const
	{
		Complex z(real * b.real, imag * b.imag);
		return z;
	}

	Complex operator+=(const Complex& b) 
	{
		this->real = (this->real + b.real);
		this->imag = (this->imag + b.imag);
		return *this;
	}

	Complex operator-=(const Complex& b)
	{
		this->real = (this->real - b.real);
		this->imag = (this->imag - b.imag);
		return *this;
	}

	Complex operator*=(const Complex& b)
	{
		this->real = (this->real * b.real);
		this->imag = (this->imag * b.imag);
		return *this;
	}


	Complex operator==(const Complex& b) const
	{
		if (sqrt(pow(real, 2) + pow(imag, 2) == sqrt(pow(b.real, 2) + pow(b.imag, 2))))		
			return 1;	
		else return 0;
	}

	Complex operator!=(const Complex& b) const 
	{
		if (sqrt(pow(real, 2) + pow(imag, 2) != sqrt(pow(b.real, 2) + pow(b.imag, 2))))
			return 1;
		else return 0;
	}

	Complex operator>(const Complex& b) const
	{
		if (sqrt(pow(real, 2) + pow(imag, 2) > sqrt(pow(b.real, 2) + pow(b.imag, 2))))
			return 1;
		else return 0;
	}

	Complex operator<(const Complex& b) const
	{
		if (sqrt(pow(real, 2) + pow(imag, 2) < sqrt(pow(b.real, 2) + pow(b.imag, 2))))
			return 1;
		else return 0;
	}

	friend istream& operator>>(istream& is, Complex& obj);

	friend ostream& operator<<(ostream& os, const Complex& obj);
};

istream& operator>>(istream& is, Complex& obj)
{
	is >> obj.real;
	is >> obj.imag;
	return is;
}

ostream& operator<<(ostream& os, const Complex& obj)
{
	os << "Real:" << obj.real << "\n" << "Image:" << obj.imag;
	return  os;
}

int main()
{
	Complex a;
	cin >> a;
	cout << a;
	Complex b(10, 9);
	a += b;
}