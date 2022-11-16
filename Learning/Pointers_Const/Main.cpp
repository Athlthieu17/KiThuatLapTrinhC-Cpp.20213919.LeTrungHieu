#include <iostream>

using namespace std;
int main()
{
	const int value = 10;
	const int* ptr = &value; // ptr là con trỏ hằng
	//*ptr = 20; // lỗi biên dịch: you cannot assign to a variable that is const
	return 0;

	int value_1 = 10;
	const int* const ptr = &value_1; //khong thay doi duoc vung nho khong thay doi duoc dia chi

}