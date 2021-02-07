#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int arr[50][50];

int main() {
	int col, row;
	cin >> col >> row;
	int small = min(col, row) - 1;

	for (int i = 0; i < col; ++i) {
		for (int j = 0; j < row; ++j) {
			scanf_s("%1d", &arr[j][i]);
		}
	}
	
	if (row > col) {
		for (int i = 0; i + small < col; ++i) {
			for (int j = 0; j + small < row; ++j) {
				if (arr[j][i] == arr[j + small][i] && arr[j][i] == arr[j + small][i + small] && arr[j][i] == arr[j][i + small]) {
					cout << (small + 1) * (small + 1);
					return 0;
				}
			}
			--small;
			if (small == 0) {
				cout << 1;
				return 0;
			}
		}
	}
	else {
		for (int i = 0; i + small < col; ++i) {
			for (int j = 0; j + small < row; ++j) {
				if (arr[i][j] == arr[i + small][j] && arr[i][j] == arr[i + small][j + small] && arr[i][j] == arr[i][j + small]) {
					cout << (small + 1) * (small + 1);
					return 0;
				}
			}
			--small;
			if (small == 0) {
				cout << 1;
				return 0;
			}
		}
	}
}