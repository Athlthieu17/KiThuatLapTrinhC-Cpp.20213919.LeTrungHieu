#pragma once
#include <iostream>
using namespace std;
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
    u.b = (u1.b * u2.a - u1.a * u2.b) / (pow((u2.a), 2) + pow((u2.b), 2));
}
void calcComplex() {
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
}
void displaycomplex()
{
    double a, b;
    cout << "moi ban nhap phan thuc:"; cin >> a;
    cout << "moi ban nhap phan ao:"; cin >> b; cout << endl;
    cout << a << "+" << b << "j";
}