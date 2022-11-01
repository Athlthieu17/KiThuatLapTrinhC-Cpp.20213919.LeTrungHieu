#pragma once
#include <iostream>
using namespace std;
void kiemTraTamGiac(int a, int b, int c)
{
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
