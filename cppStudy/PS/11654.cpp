#include <iostream>

using namespace std;
int arr[10];

int main() {
	for (int i = 1; i <= 8; ++i) {
		cin >> arr[i];
	}
	
	if (arr[1] == 1 && arr[2] == 2 && arr[3] == 3 && arr[4] == 4 && arr[5] == 5 && arr[6] == 6 && arr[7] == 7 && arr[8] == 8) {
		cout << "ascending";
	}
	else if (arr[8] == 1 && arr[7] == 2 && arr[6] == 3 && arr[5] == 4 && arr[4] == 5 && arr[3] == 6 && arr[2] == 7 && arr[1] == 8) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}

	return 0;
}