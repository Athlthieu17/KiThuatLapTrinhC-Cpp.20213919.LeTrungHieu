#include <iostream>
#include <vector>

using namespace std;

void doSomething(bool earlyExit)
{
	int* array = new int[3] { 1, 3, 2 };

	if (earlyExit) // thoát khỏi hàm
		return;

	delete[] array; // trường hợp hàm thoát sớm, array sẽ không bị xóa
}

void printStack(const vector<int>& stack)
{
	for (const auto& element : stack)
		cout << element << ' ';
	cout << "(cap " << stack.capacity() << " length " << stack.size() << ")\n";
}

int main()
{
	vector<int> array;
	vector<int> array_2 = {1,2,3,4,12,321,2};
	vector<int> array_3{3,1,3,213,21,3};

	//array[1] = 5; // không kiểm tra phạm vi mảng
	//array.at(1) = 5; // có kiểm tra phạm vi mảng

	//Một số thao tác với mảng kiểu std::vector

	//Xem kích thước của mảng kiểu std::vector
	vector<int> arr = { 2, 5, 8, 3, 1 };
	cout << arr.size() << endl;

	//Thay đổi kích thước mảng kiểu std::vector
	vector<int> array_1{ 2, 5, 8, 3, 1 }; // mảng 5 phần tử
	array_1.resize(10); // thay đổi độ dài mảng thành 10 phần tử

	cout << "Do dai mang: " << array_1.size() << '\n';

	for (auto const& item : array_1)
		cout << item << ' ';

	vector<int> array_4{ 2, 5, 8, 3, 1 }; // mảng 5 phần tử
	array_4.resize(3); // 2 5 8, phần tử thứ 4 trở đi sẽ bị cắt bỏ

	//Dung lượng và kích thước của std::vector
	vector<int> array_5;
	array_5 = { 0, 1, 2, 3, 4 }; // length = 5, cap = 5
	cout << "length: " << array_5.size() << "  capacity: " << array_5.capacity() << '\n';

	array = { 9, 8, 7 }; // length = 3, cap = 5
	cout << "length: " << array_5.size() << "  capacity: " << array_5.capacity() << '\n';

	//Chúng ta có thể cấp phát một dung lượng (capacity) ban đầu cho std::vector bằng hàm reserve():
	vector<int> array_6;
	array_6.reserve(5); // đặt dung lượng vector là 5

	//Hành vi ngăn xếp trên std::vector
	/*
		push_back() thêm một phần tử vào cuối vector.
		back() trả về giá trị của phần tử cuối vector.
		pop_back() xóa một phần tử cuối vector.
	*/
	vector<int> stack;

	stack.push_back(5); // push_back() thêm một phần tử vào cuối vector
	printStack(stack);

	stack.push_back(3);
	printStack(stack);

	stack.push_back(2);
	printStack(stack);

	// back() trả về giá trị của phần tử cuối
	cout << "Phan tu cuoi: " << stack.back() << '\n';

	stack.pop_back(); // pop_back() xóa một phần tử cuối vector
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);



	system("pause");


}