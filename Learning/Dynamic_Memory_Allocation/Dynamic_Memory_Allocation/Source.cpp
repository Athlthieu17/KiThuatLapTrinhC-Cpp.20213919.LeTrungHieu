#include <iostream>

using namespace std;

int main() {
	int* ptr = new int;
	*ptr = 10;
	int* ptr_1 = new int{ 10 };

	int* ptr_2 = new int;
	delete ptr_2;
	ptr_2 = nullptr;
}