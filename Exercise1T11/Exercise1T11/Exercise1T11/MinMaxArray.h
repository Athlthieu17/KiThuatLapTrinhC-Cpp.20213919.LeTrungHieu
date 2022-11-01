#pragma once
#include <iostream>
using namespace std; 

void MinMaxArray()
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

