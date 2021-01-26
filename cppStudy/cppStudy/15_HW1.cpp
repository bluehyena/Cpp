#include <iostream>

using namespace std;

int* makeArray(const int size);
int sumArray(const int* arr, const int size);
void printArray(const int* arr, const int size);

int main()
{
	int n;
	cout << "Enter Array Size: ";
	cin >> n;

	int* arr = makeArray(n);
	printArray(arr, n);

	int sum = sumArray(arr, n);
	cout << "\nSum of the array: " << sum << endl;

	delete[] arr;
	return 0;
}

int* makeArray(const int size) {
	int* arr = new int[size];

	for (int i = 0; i < size; ++i) {
		arr[i] = i + 1;
	}

	return arr;
}

int sumArray(const int* arr, const int size) {
	int sum = 0;

	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	
	return sum;
}

void printArray(const int* arr, const int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << ' ';
	}
}