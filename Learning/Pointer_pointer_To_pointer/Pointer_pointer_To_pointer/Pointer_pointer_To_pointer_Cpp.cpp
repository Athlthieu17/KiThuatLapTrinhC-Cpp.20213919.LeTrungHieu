#include <iostream>

using namespace std;

int getSingleIndex(int row, int col, int numberOfColumnsInArray)
{
	return (row * numberOfColumnsInArray) + col;
}

int main()
{
	int value = 10;

	int* ptr = &value;
	cout << *ptr << "\n"; // in giá trị tại địa chỉ ptr trỏ đến (biến value)

	int** ptr_ptr = &ptr; // con trỏ "ptr_ptr" trỏ đến con trỏ "ptr" trỏ đến biến "value"
	cout << *ptr_ptr << "\n"; // in giá trị tại địa chỉ ptr_ptr trỏ đến (địa chỉ ptr (&ptr)) 
	cout << **ptr_ptr << "\n"; // dereference 2 lần để in giá trị tại địa chỉ ptr trỏ đến (biến value)

	int value = 10;
	//int** ptrptr = && value; // lỗi
	

	//Mảng con trỏ (Arrays of pointers)
	int* ptr1 = NULL;
	int* ptr2 = NULL;

	int** ptr_ptr = new int* [2];
	ptr_ptr[0] = ptr1;
	ptr_ptr[1] = ptr2;

	//Cấp phát động mảng 2 chiều (2D dynamically allocated arrays)

	int row, col;
	// nhập số dòng, cột
	cout << "Nhap so dong: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> col;

	// cấp phát động
	int** arr = new int* [row]; // Cấp phát vùng nhớ cho ROW con trỏ kiểu (int *): dòng
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col]; // Mỗi con trỏ kiểu (int *) sẽ quản lý COL phần tử kiểu int: cột
	}

	// nhập mảng 2 chiều
	cout << "Nhap mang:" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}

	// xuất mảng 2 chiều
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Giải phóng vùng nhớ cho từng phần tử mảng
	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}

	// Giải phóng cho mảng
	delete[] arr;


	// giả sử cần mảng 2 chiều 5 dòng, 10 cột
	// cấp phát mảng 1 chiều
	int row = 5;
	int col = 10;
	int n = row * col; // 5 * 10 = 50 phần tử
	int* arr_1 = new int[n];

	// gán arr[1,2] = 3 sử dụng mảng 1 chiều arr
	arr_1[getSingleIndex(1, 2, col)] = 3;

	// xuất giá trị arr[1,2]
	cout << arr_1[getSingleIndex(1, 2, col)] << "\n";

	system("pause");
	return 0;


}