#include <iostream>

using namespace std;
void change(int& y)
{
	cout << y;

	y = 17;

	cout << y;
}
int main()
{
	int value = 10;
	int &ref = value; // ref tham chiếu đến biến value

	value = 15; // value = 15
	ref = 20; // value = 20

	cout << value << "\n"; // 20
	++ref;
	cout << value << "\n"; // 21

	// in địa chỉ value và ref
	cout << &value << "\n";
	cout << &ref << "\n";
	int x = 1;
	cout << x; //x =1
	change(x);
	cout << x; //x=17
	system("pause");
	return 0;
}