/*
 ����ڷκ��� ȭ���µ�(Fahrenheit) ���� �Է� �޾� �����µ� (Celsius) ������ 
 ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
(����(C): 5 / 9 * ( ȭ��(F) - 32))
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