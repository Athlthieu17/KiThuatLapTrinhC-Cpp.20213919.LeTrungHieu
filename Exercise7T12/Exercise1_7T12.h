#include <bits/stdc++.h>

using namespace std;

class Array 
{
    int n;
    int *data;
    public:
    Array(int _n=0, int _d = 0);
    ~Array();
    void set_data(int i, int d){}
    void get_data(int n,int* d[]){}
    void importArray(int _n){}
    void exportArray(int _n){}
    Array& operator=(const Array& a);
};