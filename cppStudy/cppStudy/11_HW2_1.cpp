#include <iostream>
#include <iomanip>

using namespace std;

int Fibonacci(int number) {

	if (number < 2) {
		return 0;
	}
	else if (number == 2) {
		return 1;
	}
	else {
		return Fibonacci(number - 2) + Fibonacci(number - 1);
	}
}

int main() {
	
	int n;

	cout << "���ڸ� �Է��ϼ��� : " << endl;
	cin >> n;

	cout << "Fibonacci(" << n << ") :" << Fibonacci(n) << endl;
	
	return 0;
}