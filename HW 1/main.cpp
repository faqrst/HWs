#include <iostream> // in-out
#include <cstdlib> // rand 
#include <ctime> // time
#include <cstdint> // data types

using std::cin;
using std::cout;
using std::endl;


int main() {
	unsigned int arr1[20] = { 0 };
	short a = 0;

	srand(time(0));

	for (size_t i = 0; i < 20; i++) {
		arr1[i] = rand() % 10;
		// cout << arr1[i] << endl;
	}

	cout << "Enter the number >> ";
	cin >> a;

	for (size_t i = 0; i < 20; i++)
	{
		if (arr1[i] > a) {
			cout << "Arrays element number " << i << " : " << arr1[i] << " is bigger than " << a << endl;
		}
	}
}