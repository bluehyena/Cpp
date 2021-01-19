#include <iostream>

using namespace std;

/*
void Swap(int var_1, int var_2) {
	
	int& num1 = var_1;
	int& num2 = var_2;

	num1 = var_2;
	num2 = var_1;
} 
*/

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	
	int var1 = 10, var2 = 20;

	cout << "var1 = " << var1 << ", var2 = " << var2 << endl;
	swap(var1, var2);
	cout << "var1 = " << var1 << ", var2 = " << var2 << endl;

	return 0;
}