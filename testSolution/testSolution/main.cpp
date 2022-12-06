
#include <iostream>
using namespace std;
auto gcd(int a,int b)
{
    while (a != b)
    {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;
}
class Fraction {
public:
    int x; // Tử số
    int y; // Mẫu số

    Fraction(int _x = 0, int _y = 0) {
        x = _x;
        y = _y;
    }

    Fraction operator + (const Fraction& op) {
        int lcm = (y * op.y) / gcd(y, op.y);
        return Fraction(x * (lcm / y) + op.x * (lcm / op.y), lcm);
    }
};

int main() {
    Fraction x = Fraction(1, 2);
    Fraction y = Fraction(2, 3);
    Fraction sum = x + y;
    cout << sum.x << " " << sum.y << endl;

    return 0;
}
