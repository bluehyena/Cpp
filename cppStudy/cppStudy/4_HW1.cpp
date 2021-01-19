/*
 사용자로부터 화씨온도(Fahrenheit) 값을 입력 받아 섭씨온도 (Celsius) 값으로 
 변환하여 출력하는 프로그램을 작성하라.
(섭씨(C): 5 / 9 * ( 화씨(F) - 32))
*/

#include <iostream>

using namespace std;

int main()
{
	double fahrenheit_value = 0;
	double celsius_value = 0;

	cout << "Please enter Fahrenheit value: ";
	cin >> fahrenheit_value;

	celsius_value = (5.0 / 9.0) * (fahrenheit_value - 32);

	cout << "Celsius value is :" << celsius_value << endl;

	return 0;
}