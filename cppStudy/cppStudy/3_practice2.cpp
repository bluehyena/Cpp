#include <iostream>

using namespace std;

int main() 
{

	int num = 0;
	int sum = 0;

	while (true) 
	{
		cout << "수를 입력하시오 (0을 입력하면 종료) : ";
		cin >> num;
		
		if (num == 0)
		{
			break;
		}

		sum += num;
	}

	cout << "입력한 수의 합은" << sum << "입니다." << endl;
	
	return 0;
}