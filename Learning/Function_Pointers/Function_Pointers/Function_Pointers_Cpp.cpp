#include <iostream>
#include <functional>

using namespace std;

int func(int a)
{
	// do something
	return a;
}

int(*fcnPtr)(int); // con trỏ hàm nhận vào 1 biến kiểu int và trả về kiểu int
void(*fcnPtr)(int, int); // con trỏ hàm nhận vào 2 biến kiểu int và trả về kiểu void

//Gán địa chỉ của hàm cho con trỏ hàm
// khai báo prototype
int funcA();
int funcB();
void funcC();
double funcD(int a);

//Gọi một hàm bằng con trỏ hàm
void swapNumber(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//Truyền hàm vào hàm dưới dạng đối số
// hàm sắp xếp tăng sử dụng thuật toán selection sort
void selectionSortAsc(int* arr, int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray  
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array  
		min_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[min_idx] > arr[j])
			{
				min_idx = j;
			}
		}

		// Swap the found minimum element with the first element  
		swapNumber(arr[min_idx], arr[i]);
	}
}

// hàm sắp xếp giảm sử dụng thuật toán selection sort
void selectionSortDesc(int* arr, int n)
{
	int i, j, max_idx;

	// One by one move boundary of unsorted subarray  
	for (i = 0; i < n - 1; i++)
	{
		// Find the maximum element in unsorted array  
		max_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[max_idx] < arr[j])
			{
				max_idx = j;
			}
		}

		// Swap the found maximum element with the first element  
		swapNumber(arr[max_idx], arr[i]);
	}
}
/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}



bool asc(int a, int b)
{
	return a > b;
}

bool desc(int a, int b)
{
	return a < b;
}

void selectionSort(int* arr, int n, bool(*comparisonFcn)(int, int))
{
	int i, j, find_idx;

	// One by one move boundary of unsorted subarray  
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array  
		find_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (comparisonFcn(arr[find_idx], arr[j]))
			{
				find_idx = j;
			}
		}

		// Swap the found minimum element with the first element  
		swapNumber(arr[find_idx], arr[i]);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

//Đối số mặc định của tham số hàm kiểu con trỏ hàm
void selectionSort(int* arr, int n, bool(*comparisonFcn)(int, int) = asc);

//std::function trong C++11
// khai báo prototype
int funcA_1();
double funcB_1(int);
void funcC_1(int& a, int& b);





int main()
{
	cout << func << '\n'; // in địa chỉ hàm func trong bộ nhớ
	cout << func(1) << '\n'; // đi đến địa chỉ hàm func và thực thi hàm


	int(*fcnPtr)() = funcA(); // lỗi, không dùng dấu ngoặc đơn () sau tên hàm
	int(*fcnPtrA)() = funcA; // ok, con trỏ fcnPtrA trỏ đến hàm funcA
	fcnPtrA = funcB; // ok, fcnPtrA có thể trỏ đến một hàm khác có cùng cấu trúc
	// fcnPtrA = &funcB; tương tự câu lệnh trên

	int(*fcnPtr1)() = funcA; // ok
	void(*fcnPtr2)() = funcA; // lỗi, kiểu trả về của con trỏ hàm và hàm không trùng nhau
	void(*fcnPtr3)() = funcC; // ok
	double(*fcnPtr4)(int) = funcD; // ok


	void(*ptrSwap) (int&, int&) = swapNumber;

	int a = 5, b = 10;
	cout << "Before: " << a << " " << b << endl;

	// gọi hàm tường minh
	(*ptrSwap)(a, b);
	cout << "After:  " << a << " " << b << endl;

	// hoặc gọi hàm ngầm định
	ptrSwap(a, b);
	cout << "After:  " << a << " " << b << endl;



	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(int);

	// Sắp xếp tăng
	selectionSortAsc(arr, n);

	cout << "Asc array: \n";
	printArray(arr, n);

	// Sắp xếp giảm
	selectionSortDesc(arr, n);

	cout << "Desc array: \n";
	printArray(arr, n);


	// Sắp xếp tăng
	selectionSort(arr, n, asc);

	cout << "Asc array: \n";
	printArray(arr, n);

	// Sắp xếp giảm
	selectionSort(arr, n, desc);

	cout << "Desc array: \n";
	printArray(arr, n);


	function<int()> fncPtrA = funcA_1;
	function<double(int)> fncPtrB = funcB_1;
	function<void(int&, int&)> fncPtrC = funcC_1;


	//Khai báo con trỏ hàm với từ khóa auto trong C++11
	auto ptrSwap = swapNumber;

	int a = 5, b = 10;
	cout << "Before: " << a << " " << b << endl;

	ptrSwap(a, b);
	cout << "After:  " << a << " " << b << endl;

	system("pause");

	return 0;
}
