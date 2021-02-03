#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main() {
	char str[50];
	char* div_arr = nullptr;
	div_arr = new char[50];

	for (int j = 0; j < 50; ++j) {
		div_arr[j] = 0;
	}

	int i = 0;
	char* context = NULL;
	char* token1 = strtok_s(str, "-", &context);
	char* token2 = strtok_s(token1, "-", &context);
	cin >> str;

	token1 = strtok_s(str, "-", &context);
	while (token1 != NULL) {
		while (token2 != NULL) {
			div_arr[i] = *token2;
			token2 = strtok_s(token1, "-", &context);
			++i;
		} 
		token1 = strtok_s(NULL, "-", &context);
	}

	int result = 0;
	for (int j = 0; j < 50; ++j) {
		result += atoi(&div_arr[j]);
	}

	for (int k = 0; k < 50; ++k) {
		cout << div_arr[k] << endl;
	}
	cout << result;

	delete[] div_arr;
	return 0;
}