#include <iostream>
#include <math.h>
#include "kiemTraTamGiac.h"
#include "MinMaxArray.h"
#include "Complex.h"

using namespace std;




double Polynom(double* heso, int n, double x)
{
    double sum = *heso;

    for (int i = 1; i < n; i++)
    {
        sum = sum + heso[i]*pow(x, i);
    }
    cout << "Gia tri cua da thuc bac n tai x = " << sum;
}


class Complex
{
public:
    double a;
    double b;
    void cinComplex()
    {
        cout << "\n nhap phan thuc :"; cin >> a;
        cout << " nhap phan ao :"; cin >> b;
    }
    void coutComplex()
    {
        cout << "\n phan thuc la :" << a;
        cout << "\n phan ao la :" << b << "\n";
    }
};
Complex Add(Complex u1, Complex u2)
{
    Complex u;
    u.a = u1.a + u2.a;
    u.b = u1.b + u2.b;
    return u;
}
Complex Subtract(Complex u1, Complex u2)
{
    Complex u;
    u.a = u1.a - u2.a;
    u.b = u1.b - u2.b;
    return u;
}
Complex Core(Complex u1, Complex u2)
{
    Complex u;
    u.a = u1.a * u2.a - u1.b * u2.b;
    u.b = u1.a * u2.b + u1.b * u2.a;
}
Complex Divide(Complex u1, Complex u2)
{
    Complex u;
    u.a = (u1.a * u2.a + u1.b * u2.b) / (pow((u2.a), 2) + pow((u2.b), 2));
    u.b = (u1.b*u2.a-u1.a*u2.b) / (pow((u2.a), 2) + pow((u2.b), 2));
}
void DisplayComplex(double a,double b)
{
    cout << "moi ban nhap phan thuc:"; cin >> a;
    cout << "moi ban nhap phan ao:"; cin >> b; cout << endl;
    cout << a << "+" << b << "j";
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
    int n; double x;
    cout << "Moi ban nhap bac n:"; cin >> n;
    cout << "\nMoi ban nhap x:"; cin >> x;
    double Arr[1000];
    for (int i = 1; i < n; i++)
    {
        cin >> Arr[i];
    }
    Polynom(Arr, n, x);

    //Ex2:
    //a)b)
    Complex AddComplex, SubtractComplex, CoreComplex,DivideComplex, u1, u2;
    cout << "\n nhap so phuc thu nhat "; u1.cinComplex();
    cout << "\n nhap so phuc thu thu 2 "; u2.cinComplex();
    cout << "\n so phuc tong :";
    AddComplex = Add(u1, u2);
    AddComplex.coutComplex();
    cout << "\n so phuc hieu :";
    SubtractComplex = Subtract(u1, u2);
    SubtractComplex.coutComplex();
    cout << "\n so phuc tich :";
    CoreComplex = Core(u1, u2);

    CoreComplex.coutComplex();
    cout << "\n so phuc thuong :";
    DivideComplex = Divide(u1, u2);
    DivideComplex.coutComplex();
    //c)
    double a, b; cin >> a >> b;
    DisplayComplex(a, b);


}