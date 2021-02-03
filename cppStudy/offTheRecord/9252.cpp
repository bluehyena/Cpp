#include <iostream>
#include <string>

using namespace std;

int main() {

	string first;
	string second;
	string third;

	cin >> first;
	cin >> second;

	third.append(second, 0, second.length());
	
	int first_length = first.length();
	int second_length = second.length();

	char arr[1001];
	char arr_b[1001];

	int a = 0;
	int temp = 0;

	int b = 0;

	for (int i = 0; i < first_length; ++i) {
		for (int j = temp; j < second_length; ++j) {
			if (first[i] == second[j]) {
				arr[a] = second[j];
				second.replace(j, 1," ");
				++a;
				temp = j;
				break;
			}
		}
	}

	temp = 0;

	for (int i = 0; i < second_length; ++i) {
		for (int j = temp; j < first_length; ++j) {
			if (third[i] == first[j]) {
				arr_b[b] = first[j];
				first.replace(j, 1, " ");
				++b;
				temp = j;
				break;
			}
		}
	}

	arr[a] = '\0';

	arr_b[b] = '\0';
	
	if (a == 0 && b == 0) {
		cout << a;
	}
	else {
		if (a > b) {
			cout << a << endl;
			cout << arr;
		}
		else {
			cout << b << endl;
			cout << arr_b;
		}
	}

	return 0;
}