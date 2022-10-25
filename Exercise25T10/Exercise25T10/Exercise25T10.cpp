#include <iostream>
#include <string.h>
using namespace std;

void Ex1()
{
    int X;
    int count = 0;
    cout << "X = ";
    cin >> X;
    for (int i = 1; i <= X; i++)
    {
        if (X % i == 0) count += 1;
    }
    if (count == 2) cout << "YES";
    else cout << "NO";
}

void Ex2()
{
    int n, k;
    cin >> k >> n;
    if (k > n) cout << "ERROR";
    else if (k == n) cout << 1;
    else
    {
        int tu = 1;
        int mau_1 = 1; int mau_2 = 1;
        for (int i = 1; i <= n; i++) tu *= i;
        for (int i = 1; i <= k; i++) mau_1 *= i;
        for (int i = 1; i <= n - k; i++) mau_2 *= i;
        int kq;
        kq = tu / (mau_1 * mau_2);
        cout << kq;
    }
}

void Ex3()
{
    char x = 'T';
    int n; cin >> n;
    int M[1000];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> M[i];
        count += 1;
        if (M[i] == 0)
        {
            x = 'F';
            break;
        }

    }
    for (int j = 0; j < n; j++)
    {
        if (M[j] < 0) x = 'N';
    }
    int medium;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (M[i] > M[j])
            {
                medium = M[i];
                M[i] = M[j];
                M[j] = medium;
            }
        }
    }
    for (int i = 1; i <= count; i++) cout << M[i];
    if (x == 'T')
    {
        cout << "So nho nhat la: " << M[0] << "\n";
        cout << "So lon nhat la: " << M[count - 1];
    }
    else if (x == 'N')
    {
        cout << "So nho nhat la: " << M[1] << "\n";
        cout << "So lon nhat la: " << M[count];
    }
    else
    {
        cout << "So nho nhat la: " << M[2] << "\n";
        cout << "So lon nhat la: " << M[count];
    }
}


void Ex4()
{
    int n; cin >> n;
    int M[1000];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> M[i];
        count += 1;
        if (M[i] == 0) break;
    }
    int count_chan = 0;
    int count_le = 0;
    for (int i = 0; i < count; i++)
    {
        if (M[i] % 2 == 0) count_chan += 1;
    }
    cout << "so so chan la: " << count_chan << endl;
    for (int i = 0; i < count; i++)
    {
        if (M[i] % 2 != 0) count_le += 1;
    }
    cout << "so so le la: " << count_le << endl;
    cout << "So chia het cho 8 la: ";
    for (int i = 0; i < count; i++)
    {
        if (M[i] % 8 == 0) cout << M[i] << " ";
    }
}

int Fibonacci(int N)
{
    if (N == 1 || N == 2) return 1;
    return Fibonacci(N - 1) + Fibonacci(N - 2);
}
void Ex5()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) cout << Fibonacci(i) << " ";

}

void Ex6()
{
    char c = 'F';
    int N;
    cin >> N;
    for (int i = 1; i <= N + 1; i++)
    {
        if (N == Fibonacci(i))  c = 'T';
    }
    if (c == 'T') cout << "YES";
    else cout << "NO";
}

void Ex7()
{
    struct Student {
        string MSSV;
        string HoTen;
        int Tuoi;
    };

    // a)
    Student _Student1;
    _Student1.MSSV = "20213919";
    _Student1.HoTen = "LeTrungHieu";
    _Student1.Tuoi = 19;

    //b) c)
    Student _Student2;
    cin >> _Student2.MSSV; cout << endl;
    cin >> _Student2.HoTen; cout << endl;
    cin >> _Student2.Tuoi;
    cout << endl << "_Student2.MSSV = " << _Student2.MSSV << endl;
    cout << "_Student2.HoTen = " << _Student2.HoTen << endl;
    cout << "_Student2.Tuoi = " << _Student2.Tuoi << endl;

    //d) chua lam duoc ạ

}

int main()
{
    //Ex1();
    //Ex2();
    //Ex3();
    //Ex4();
    //Ex5();
    //Ex6();
    //Ex7();


}
