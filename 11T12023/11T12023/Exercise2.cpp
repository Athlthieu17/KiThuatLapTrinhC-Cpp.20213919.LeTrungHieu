#include <iostream>
#include <math.h>

using namespace std;

class Array
{
	int n; 
	int data[100];
public:
	Array(int _n = 0, int _d = 0)
	{
		n = _n;
		for (int i = 0; i < n; i++)
		{
			data[i] = _d;
		}
	}
	Array& operator [] (int n, const Array& data)
	{

	}
	friend istream& operator>>(istream& is, Array& data);

	friend ostream& operator<<(ostream& os,const Array& data);

	Array& operator () ()
	{

	}

	Array& operator + (const Array& _arr)
	{
		if (this->n == _arr.n)
		{
			int newData[1000];
			for (int i = 0; i < this->n; i++)
			{
				newData[i] = this->data[i] + _arr.data[i];
			}
			
		}
		else return 0;

	}
	Array& operator - (const Array& _arr)
	{
		if (this->n == _arr.n)
		{
			int newData[1000];
			for (int i = 0; i < this->n; i++)
			{
				newData[i] = this->data[i] - _arr.data[i];
			}

		}
		else return 0;
	}
	Array& operator * (const Array& _arr)
	{
		if (this->n == _arr.n)
		{
			int newData[1000];
			for (int i = 0; i < this->n; i++)
			{
				newData[i] = this->data[i] + _arr.data[i];
			}

		}
		else return 0;
	}
	~Array();

};

istream& operator >> (istream& is, Array& data[])
{
	int n;
	is >> n;
	for (int i = 0; i < n; i++)
	{
		is >> data[i];
	}
	return is;
}

ostream& operator << (ostream& os, const Array& data)
{
	int n = sizeof(data) / sizeof(int);
	for (int i = 0; i < n; i++)
	{
		os << data[i];
	}
	return os;
}


int main()
{

}