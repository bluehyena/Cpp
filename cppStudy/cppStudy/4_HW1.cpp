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
	
	/* 
	
	Q. ��ó�� ������ float ������ �߾��� ������ ��ȯ�ϴ� ��������
	5.0�� 9.0�� double ������ �ν��ؼ� 4����Ʈ float ���� 8����Ʈ double ��
	���̿��� ��� �����÷� ��� ���µ� ���� �Ǽ��� double ������ �����ϴ� ���� ������? 

	*/

	cout << "Celsius value is :" << celsius_value << endl;

	return 0;
}

/*

1Ʈ

#include <iostream>

using namespace std;

int main()
{
	float fahrenheit_value;
	float celsius_value;

	cout << "Please enter Fahrenheit value: ";

	cin >> fahrenheit_value;

	celsius_value = ((5/9) * (fahrenheit_value - 32));

	cout << "Celsius value is :" << celsius_value;

	return 0;
}

2Ʈ

#include <iostream>

using namespace std;

int main()
{
	float fahrenheit_value = 0;
	float celsius_value = 0;

	cout << "Please enter Fahrenheit value: ";

	cin >> fahrenheit_value;

	celsius_value += (5 / 9) * (fahrenheit_value - 32);

	cout << "Celsius value is :" << celsius_value << endl;

	return 0;

*/