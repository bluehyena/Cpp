#include <iostream>

using namespace std;

int main() {
	
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int a = 0; a < 10; a++) {
		cout << arr[a] << " ";
	}

	cout << endl;
	cout << "--reverse--" << endl;

	for (int a = 9; a >= 0; a--) {
		cout << arr[a] << " ";
	}

	cout << endl;

	return 0;
}
