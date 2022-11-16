#include <iostream>

using namespace std;
int main()
{
	cout << "Nhập chiều dài mảng: ";
	int length;
	cin >> length;

	int* array = new int[length]; // kích thước mảng có thể là biến số

	// sử dụng mảng
	// ...

	delete[] array; // trả lại vùng nhớ mảng array cho hệ điều hành

	int fixedArray[]{ 1,2,3 }; // mang tinh

	//int* dynamicArray_1 = new int [] {1, 2, 3}; // loi

	int* dynamicArray_2 = new int [3] {1, 2, 3}; // ok

	int* array = new int[10](); //mang dong co 10 phan tu 0



	return 0;
}