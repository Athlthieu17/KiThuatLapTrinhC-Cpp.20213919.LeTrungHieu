#include <bits/stdc++.h>
#include "Exercise1_7T12.h"
using namespace std;

Array::Array(int _n, int _d)
{
    n = _n;
    data = new int[n];
    for (int i = 0; i < n; i++)
    {
        data[i] = _d;
    }
}
Array::~Array()
{
    delete [] data;
}
// ham` tao ban sao
Array::Array(const Array &a )
{
    n = a.n;
    data = new int[n];
    for (int i = 0; i < n; i++)
    {
        data[i] = a.data[i];
    }
}
// ham gan'
Array& Array::operator=(const Array& a)
{
    if(n != a.n)
    {
        delete [] data;
        n = a.n;
        data = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        data[i] = a.data[i];
    }
    return *this; 
}
Array :: Array(const Array & a)
{
    n = a.n;
    data = new int[n];
    for (int i=0; i < n; ++i)
        data[i] = a.data[i];
}
void Array::importArray(int _n)
{
    n= _n;
    data = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }  
}

void Array::exportArray(int _n)
{
    n = _n;
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " "; 
    }
}
void Array::set_data(int i, int d)
{
    if ((i>=0)&& (i<n))
    {
        data[i] = d;
    }   
}
void Array::get_data(int n,int* d[])
{
    for (int i = 0; i < n; i++)
    {
        *(d+i) = data[i];
    }
}
int main()
{
    freopen("Exercise1.inp","r",stdin);
    freopen("Exercise1.out","w",stdout);
    // ham` tao.
    Array a(5);
    Array *pa = new Array(5,1);
    // ham` huy?
    delete pa;
    //ham` tao ban sao
    Array a(5,0);
    Array b(a);
    b.set_data(0,10);
    // ham` gan'
    Array a1;
    a1 = a;
    Array a2;
    
    //
    return 0;
}