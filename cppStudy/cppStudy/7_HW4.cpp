/*
�� ���
N�� �Է� �ް�,  N������ �̷���� �Ƕ�̵带 ����ϴ� ���α׷��� �ۼ��϶�.

*/

#include <iostream>

using namespace std;

int main()
{
	int N;
	int floor = 1;

	cin >> N;

	while (floor <= N) 
	{
		// C++ ���� ���̽�ó�� "���ڿ�" * 100 �ϴ� ���� ���� ������?
		
		for (int i = 0; i < N-floor; i++)
		{
			cout << " ";
		}

		for (int i = 0; i < floor * 2 - 1; i++)
		{
			cout << "*";
		}
		
		cout << endl;
		++floor;
	}

	return 0;
}