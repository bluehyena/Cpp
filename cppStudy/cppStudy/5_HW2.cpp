/*
�Է� ���� ������ ���� ������ ��ȯ�ϴ� ���α׷��� �ۼ��϶�.
(�Է� ���� ���� 0~100���� ���� �ƴ� ���, ���� ���)
(A: 90�̻�, B: 80�̻� 90�̸�, C: 70�̻� 80�̸�, D: 60�̻� 70�̸�, F: 60�̸�)
*/

#include <iostream>

using namespace std;

int main()
{
	int score;

	cout << "Enter your score: ";
	cin >> score;

	if (score <= 100 && score >=90)
	{
		cout << "Your grade is A" << endl;
	}

	else if (score < 90 && score >= 80)
	{
		cout << "Your grade is B" << endl;
	}
	
	else if (score < 80 && score >= 70)
	{
		cout << "Your grade is C" << endl;
	}

	else if (score < 70 && score >= 60)
	{
		cout << "Your grade is D" << endl;
	}

	else if (score < 60 && score >= 0)
	{
		cout << "Your grade is F" << endl;
	}

	else
	{
		cout << "The Score (" << score << ") is invalid" << endl;
	}
	
	return 0;
}