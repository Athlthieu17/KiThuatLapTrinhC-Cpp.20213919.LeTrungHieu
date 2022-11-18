#include <iostream>

using namespace std;

int addInteger(int a, int b)
{
	return a + b;
}

double addDouble(double a, double b)
{
	return a + b;
}


//Nạp chồng hàm trong C++ (Function overloading)
int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

int add(int a, int b, int c)
{
	return a + b + c;
}

//Một số hàm không thể nạp chồng trong C++
//1. Hàm chỉ khác nhau kiểu trả về
int foo() {
	return 10;
}

//double foo() {  // compiler error
	//return 0.5;
//}

//2. Tham số hàm kiểu typedef
typedef int myint;
void print(myint value)
{
	cout << value << '\n';
}
void print(int value) // compiler error
{
	cout << value << '\n';
}

//3. Tham số hàm kiểu con trỏ * và mảng []
int foo(int* x);
int foo(int x[]); // compiler error


//4. Nạp chồng hàm và từ khóa const

void fun(const int i)
{
	cout << "fun(const int) called ";
}

void fun(int i)
{
	cout << "fun(int ) called ";
}


void fun_1(char* a)
{
	cout << "non-const fun() " << a;
}

void fun_1(const char* a)
{
	cout << "const fun() " << a;
}

int main()
{
	const int i = 10;
	fun(i);

	const char* ptr = "Adath";
	fun_1(ptr); // output: const fun () Adath

	system("pause");
	return 0;
}