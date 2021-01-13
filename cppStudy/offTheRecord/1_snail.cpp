#include <iostream>

using namespace std;

int main() {
	int number;

	cout << "Enter the number :" << endl;
	cin >> number;

	const int N = number;

	int arr[1][1];

	for (int a = 0; a < number; a++) {

		int i = 1;

		if (a == 0) {
			cout << a + i;
			++i;
		}
		else {
			cout << (4 * number) - (a + 3);
		}
		
		if (a == 0) {
			cout << a + i;
			++i;
		}
		else {
			cout
		}

		// 마지막 항
		cout << (number - 1) + a;	
	}

	return 0;
}

/*
for (int b = 0; b < number; b++) {
			cout << a;
		}

		for (int d = 0; d <= (number - 2 * d); d++) {

		}

		for (int b = 1; b <= number; b++) {
			cout << b;

			cout << c + b - 1;
			}

		}
		cout << endl;
	}
*/