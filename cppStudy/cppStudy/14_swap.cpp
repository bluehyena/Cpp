#include <iostream>

using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int var1 = 10, var2 = 20;

	cout << "var1 = " << var1 << ", var2 = " << var2 << endl;
	swap(&var1, &var2);
	cout << "var1 = " << var1 << ", var2 = " << var2 << endl;

	return 0;
}