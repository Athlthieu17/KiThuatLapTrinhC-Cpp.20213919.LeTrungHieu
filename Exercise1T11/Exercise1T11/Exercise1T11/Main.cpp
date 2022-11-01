#include <iostream>
#include "kiemTraTamGiac.h"
#include "MinMaxArray.h"

using namespace std;


double Polynom(double* heso, int n, double x)
{
    
}


void TestComplex(double a, double b) 
{
    cout << "moi ban nhap phan thuc:"; cin >> a;
    cout << "moi ban nhap phan ao:"; cin >> b;


}
void TestMaxMin()
{
    int n; cin >> n; int M[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> M[i];
    }
    int tg = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (M[i] > M[j])
            {
                tg = M[i];
                M[i] = M[j];
                M[j] = tg;
            }
        }
    }
    cout << "Min = " << M[1];
    cout << endl << "Max = " << M[n];
}


void KiemTraTamGiac(int a, int b, int c)
{
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b) {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            cout << "Đây là tam giác vuông";
        else if (a == b && b == c)
            cout << "Đây là tam giác đều";
        else if (a == b || a == c || b == c)
            cout << "Đây là tam giác cân";
        else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
            cout << "Đây là tam giác tù";
        else
            cout << "Đây là tam giác nhọn";
    }
    else
        cout << "Ba cạnh a, b, c không phải là ba cạnh của một tam giác";
}


int main()
{
    
}