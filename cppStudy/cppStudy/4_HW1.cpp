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
	
	/* 
	
	Q. 맨처음 선언을 float 형으로 했었고 섭씨로 변환하는 과정에서
	5.0과 9.0은 double 형으로 인식해서 4바이트 float 형과 8바이트 double 형
	사이에서 산술 오버플로 경고가 떴는데 보통 실수는 double 형으로 선언하는 것이 좋나요? 

	*/

	cout << "Celsius value is :" << celsius_value << endl;

	return 0;
}

/*

1트

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

2트

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