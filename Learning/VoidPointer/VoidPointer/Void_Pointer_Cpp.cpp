#include <iostream>

using namespace std;
enum Type
{
	INT,
	DOUBLE
};

void printValueOfPointer(void* ptr, Type type)
{
	switch (type)
	{
	case INT:
		cout << *(static_cast<int*>(ptr)) << '\n'; // ép con trỏ void thành con trỏ int
		break;
	case DOUBLE:
		cout << *(static_cast<double*>(ptr)) << '\n'; // ép con trỏ void thành con trỏ double
		break;
	}
}


int main()
{
	void* ptr;  // ptr là con trỏ void

	int n;
	float f;
	double d;

	void* ptr_1;
	ptr_1 = &n; // ok
	ptr_1 = &f; // ok
	ptr_1 = &d; // ok

	int value = 10;
	void* voidPtr = &value;

	// cout << *voidPtr << endl; // lỗi, không thể dereference con trỏ void

	int* intPtr = static_cast<int*>(voidPtr); // ép kiểu thành con trỏ int
	cout << *intPtr << endl; // ok

	int nValue = 10;
	double dValue = 6.9;

	printValueOfPointer(&nValue, INT);
	printValueOfPointer(&dValue, DOUBLE);

	system("pause");
	return 0;
}