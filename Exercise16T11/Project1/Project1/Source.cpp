#include <iostream>

using namespace std;

void Ex1()
{
	int n;
	int M[1000], N[1000], K[1000];
	cout << "Moi ban nhap mang 1";
	for (int i = 0; i < n; i++)
	{
		cin >> M[i];
	};
	cout << "Moi ban nhap mang 2";
	for (int i = 0; i < n; i++)
	{
		cin >> N[i];
	};
	for (int i = 0; i < n; i++)
	{
		K[i] = M[i] + N[i];
	}
	cout << "Ket qua mang 3:";
	for (int i = 0; i < n; i++)
	{
		cout << K[i];
	};
}
void Sum(int m,int n, int M[3][4])
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += M[i][j];
		}
	}
	cout << "Sum keyTest[3][4] = " << sum;
	
}

void Reverse(double arr[], const int size, double*& rev)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		rev[size - i-1] = arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << rev[i];
	}
}

void Ex3_1()
{
	int keyTest[3][4] = { {1,2,3,4},{2,11,3,5},{8,4,9,2} };
	//Sum(3, 4,keyTest[3][4]);
}

void Ex3_2()
{

}

int main()
{
	Ex1();
	int n; cin >> n;
	int 
	Reverse()
}