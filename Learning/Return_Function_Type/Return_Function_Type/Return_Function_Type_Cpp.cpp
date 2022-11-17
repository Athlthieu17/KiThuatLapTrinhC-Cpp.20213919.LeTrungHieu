#include <iostream>
#include <array>
using namespace std;
#define MAX 10
//Hàm trả về giá trị (return by value)
int add(int x, int y)
{
	int value = x + y;
	return value; // Bản sao của biến value được tạo ra và trả về
} // biến value bị hủy khi ra khỏi hàm

int return69()
{
	return (60 + 9); // Bản sao của hằng 69 được tạo ra và trả về
}

//Hàm trả về địa chỉ(return by address)
int* add_2(int x, int y)
{
	int value = x + y;
	return &value; // trả về địa chỉ của biến value
} // biến value bị hủy khi ra khỏi hàm


int* allocateArray(int size)
{
	return new int[size];
}

//Hàm trả về tham chiếu (return by reference)
int& add_3(int x, int y)
{
	int value = x + y;
	return value; // trả về tham chiếu của biến value
} // biến value bị hủy khi ra khỏi hàm


int& getElement(array<int, MAX>& arr, int idx)
{
	return arr[idx]; // trả về tham chiếu tới phần tử idx
}

int& max(int& a, int& b)
{
	return a > b ? a : b; // trả về tham chiếu của biến lớn hơn
}

int main()
{
	int* array_2 = allocateArray(10);

	// ...

	delete[] array_2;
	array<int, MAX> arr;

	// gán phần tử thứ 2 = 20 bằng tham chiếu <=> arr[2] = 20
	getElement(arr, 2) = 20;

	cout << arr[2] << '\n'; // in 20


	int x = 6;
	int y = 9;

	max(x, y) = 69; // gán biến lớn hơn bằng 69

	cout << "x = " << x << '\n'; // 6
	cout << "y = " << y << '\n'; // 69: y lớn hơn nên bị thay đổi
	system("pause");
	return 0;
}