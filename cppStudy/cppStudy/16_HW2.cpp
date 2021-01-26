/*
#include <iostream>

using namespace std;

int main() {
	int arr[3][4] = {
		{10,11,12,13},
		{20,21,22,23},
		{30,31,32,33}
	};

	int (*ptrArr)[4] = arr;

	for (int i = 0; i < 3; ++i) {
		cout << *ptrArr[i] << endl;
	}

	cout << *ptrArr;

	return 0;
}
*/

#include <iostream>

using namespace std;

int** buildTable(int n);
void make_identity_matrix(int** table, int n);
void printTable(int** m, int n);

int main() {
	
	int n = 0;
	
	cout << "N을 입력하시오 : ";
	cin >> n;
	
	if (n < 1) {
		cout << "\n행렬을 생성할 수 없습니다.\n" << endl;
		exit(EXIT_FAILURE);
	}

	int** table = buildTable(n);
	make_identity_matrix(table, n);
	printTable(table, n);

	for (int i = 0; i < n; i++)
		delete[] table[i];
	delete table;

	return 0;
}

int** buildTable(int n) {
	
	int** table = new int* [n];

	for (int i = 0; i < n; ++i) {
		table[i] = new int[n];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			table[i][j] = 0;
		}
	}

	return table;
}

void make_identity_matrix(int** table, int n) {	
	for (int i = 0; i < n; ++i) {	
		for (int j = 0; j < n; ++j) {
			if (i == j) {
				table[i][j] = 1;
			}
		}
	}
}

void printTable(int** m, int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << m[i][j];
		}
		cout << '\n';
	}
}
