#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int arr[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10, 11, 12} };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			
			cout << setw(4) << arr[i][j];
			
			if (j == 2) {
				int sum1 = 0;
				
				for (int k=0; k < 3; k++) {
					sum1 += arr[i][k];
				}
				
				cout << setw(4) << sum1 << endl;
			}
		}
	}

	for (int l = 0; l < 3; l++) {
		int sum2 = 0;

		for (int m = 0; m < 4; m++) {
			sum2 += arr[m][l];

		}
		cout << setw(4) << sum2;
	}

	cout << setw(4) << "0";

	return 0;
}