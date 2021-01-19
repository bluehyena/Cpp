#include <iostream>

using namespace std;

int Fibonacci(int number) {
	int sum1 = 0;
	int sum2 = 1;
	
	int sum3 = 0;

	for (number; number > 2; number--) { 

		sum3 = sum1 + sum2;

		sum1 = sum2;
		sum2 = sum3;

	}

	return sum3;
}

int main() {

	int n;

	cout << "숫자를 입력하세요 : " << endl;
	cin >> n;

	cout << "Fibonacci(" << n << ") :" << Fibonacci(n) << endl;

}