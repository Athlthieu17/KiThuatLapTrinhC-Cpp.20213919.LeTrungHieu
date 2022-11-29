#pragma once
#include <iostream>
using namespace std;
class Complex
{
    float a, b;
public:
    void cinComplex()
    {
        cout << "nhap phan thuc :"; cin >> a;
        cout << "nhap phan ao :"; cin >> b;
    }
    void coutComplex()
    {
        cout << "\nSo phuc la:" << a << "+" << b << "j";
    }
    void setReal(float a)
    {
        this->a = a;
    }
    float getReal()
    {
        return a;
    }
    void setVirtual(float b) {
        this->b = b;
    }

    float getVirtual() {
        return b;
    }
    void setRealVirtual(float a, float b)
    {
        this->a = a;
        this->b = b;
    }
    void getRealVirtual(float& a, float& b)
    {
        a = this->a;
        b = this->b;
    }
};