#include <iostream>

using namespace std;

void Ex1()
{
	int n; cin >> n;
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
	}
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
		cout << rev[i] << "\t";
	}
}

void Ex3_1()
{
	int keyTest[3][4] = { {1,2,3,4},{2,11,3,5},{8,4,9,2} };
	int* sum = new int;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum = sum+ keyTest[i][j];
		}
	}
	cout << "Sum = " << sum;
	delete sum;
	int evenTotalRow=0;
	for (int i = 0; i < 3; i=i+ 2)
	{
		for (int j = 0; j < 4; j++)
		{
			evenTotalRow = evenTotalRow + keyTest[i][j];
		}
	}
	cout << "\nTong cac phan tu hang chan= " << evenTotalRow;
	int oddTotalRow=0;
	for (int i = 1; i < 3; i=i+ 2)
	{
		for (int j = 0; j < 4; j++)
		{
			oddTotalRow = oddTotalRow + keyTest[i][j];
		}
	}
	cout << "\nTong cac phan tu hang le= " << oddTotalRow;
	int max = keyTest[0][0];
	for (int i = 1; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (keyTest[i][j] > max) max = keyTest[i][j];
		}
	}
	cout << "\nPhan tu lon nhat cua mang=" << max;

	int min = keyTest[0][0];
	for (int i = 1; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (keyTest[i][j] < min) min = keyTest[i][j];
		}
	}
	cout << "\nPhan tu nho nhat cua mang=" << min;


	int c; cin >> c;
	int maxcolum = keyTest[0][c];
	for (int i = 0; i < 3; i++)
	{
		if (keyTest[i][c] > maxcolum)
		{
			maxcolum = keyTest[i][c];
		}
	}
	cout << "\nPhan tu lon nhat cua cot c=" << maxcolum;


}

void Ex3_2()
{
	int m, n;
	cout << "Nhap vao so hang:"; cin >> m;
	cout << "\nNhap vao so cot:"; cin >> n;
	int* dynamicArr = new int[m*n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> dynamicArr[i * n + j];
		}
	}
	int* sum = new int;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += dynamicArr[i * n + j];
		}
	}
	cout << "Sum = " << sum;
	delete sum;
	int evenTotalRow=0;
	for (int i = 0; i < m; i=i + 2)
	{
		for (int j = 0; j < n; j++)
		{
			evenTotalRow = evenTotalRow + dynamicArr[i*n+j];
		}
	}
	cout << "\nTong cac phan tu hang chan= " << evenTotalRow;

	int oddTotalRow=0;
	for (int i = 1; i < m; i=i + 2)
	{
		for (int j = 0; j < n; j++)
		{
			oddTotalRow = oddTotalRow + dynamicArr[i * n + j];
		}
	}
	cout << "\nTong cac phan tu hang le= " << oddTotalRow;
	int max = dynamicArr[0];
	for (int i = 1; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (dynamicArr[i * n + j] > max) max = dynamicArr[i * n + j];
		}
	}
	cout << "\nPhan tu lon nhat cua mang=" << max;

	int min = dynamicArr[0];
	for (int i = 1; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (dynamicArr[i*n+j] < min) min = dynamicArr[i*n+j];
		}
	}
	cout << "\nPhan tu nho nhat cua mang=" << min;


	int c; cin >> c;
	int maxcolum = dynamicArr[c];
	for (int i = 0; i < m; i++)
	{
		if (dynamicArr[i*m+c] > maxcolum)
		{
			maxcolum = dynamicArr[i * m + c];
		}
	}
	cout << "\nPhan tu lon nhat cua cot c=" << maxcolum;
	delete[] dynamicArr;
}

int main()
{
	Ex1();
	//Bai2:
	int n; cin >> n;
	double* testArray = new double[n];
	double* coutArray = new double[n];
	Reverse(testArray, n,coutArray);
	delete[] testArray; delete[] coutArray;

	Ex3_1();
	Ex3_2();

}