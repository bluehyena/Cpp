#include <iostream>

using namespace std;

int main() 
{

	int num = 0;
	int sum = 0;

	while (true) 
	{
		cout << "���� �Է��Ͻÿ� (0�� �Է��ϸ� ����) : ";
		cin >> num;
		
		if (num == 0)
		{
			break;
		}

		sum += num;
	}

	cout << "�Է��� ���� ����" << sum << "�Դϴ�." << endl;
	
	return 0;
}