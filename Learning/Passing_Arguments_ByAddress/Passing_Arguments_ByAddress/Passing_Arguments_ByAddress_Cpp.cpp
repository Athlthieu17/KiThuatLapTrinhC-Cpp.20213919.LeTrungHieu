#include <iostream>
using namespace std;

void foo(int* ptr)
{
	*ptr = 20;
}

void printArray(const int* array, int length)
{
	// kiểm tra con trỏ null
	if (!array)
		return;

	for (int index = 0; index < length; ++index)
		cout << array[index] << ' ';
}

// tempPtr là bản sao của ptr
void setToNull(int* tempPtr)
{
	// trỏ tempPtr đến một vị trí khác, không phải thay đổi giá trị tempPtr trỏ tới
	tempPtr = nullptr;
}

void setValue(int* tempPtr)
{
	*tempPtr = 20; // thay đổi giá trị tempPtr và ptr trỏ tới
}

void setToNullUp(int*& tempPtr)
{
	tempPtr = nullptr;
}

int main()
{
	int value = 10;

	cout << "value = " << value << '\n';
	foo(&value);
	cout << "value = " << value << '\n';

	//Output value = 10 
	// value = 20

	int array[6] = { 6, 5, 4, 3, 2, 1 };
	printArray(array, 6);

	//Output: 6 5 4 3 2 1

	// Truyền địa chỉ cho hàm bằng giá trị

	int value_1 = 10;
	int* ptr = &value_1;

	cout << *ptr << "\n"; // 10

	// tempPtr là bản sao của ptr
	setToNull(ptr);

	if (ptr)
		cout << *ptr << "\n"; // 10
	else
		cout << " ptr is null";

	/*
	Khi truyền một đối số theo địa chỉ, tham số hàm nhận được một bản sao của địa chỉ từ đối số. 
	Tại thời điểm này, tham số hàm và đối số đều trỏ đến cùng một giá trị.
	Nếu thay đổi giá trị được tham số hàm trỏ đến, điều đó sẽ thay đổi giá trị mà đối số đang trỏ đến, 
	vì cả tham số hàm và đối số đều trỏ đến cùng một giá trị.
	Nếu tham số hàm được gán một địa chỉ khác, điều đó sẽ không ảnh hưởng đến đối số, vì tham số hàm chỉ là bản sao của đối số.
	*/
	int value_2 = 10;
	int* ptr_1 = &value_2;

	cout << *ptr_1 << "\n"; // 10

	// tempPtr là bản sao của ptr
	setValue(ptr_1);

	if (ptr_1)
		cout << *ptr_1 << "\n"; // 20
	else
		cout << " ptr_1 is null";

	//Truyền địa chỉ cho hàm bằng tham chiếu
	int value_3 = 10;
	int* ptr_2 = &value_3;

	cout << *ptr_2 << "\n"; // 10

	// tempPtr là tham chiếu đến ptr
	setToNullUp(ptr_2);

	if (ptr_2)
		cout << *ptr_2 << "\n";
	else
		cout << "ptr_2 is null" << "\n"; //ptr_2 is null

	system("pause");
	return 0;
}
