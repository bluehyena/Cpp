/*
입력 받은 점수에 따라 학점을 반환하는 프로그램을 작성하라.
(입력 받은 값이 0~100사이 값이 아닌 경우, 오류 출력)
(A: 90이상, B: 80이상 90미만, C: 70이상 80미만, D: 60이상 70미만, F: 60미만)
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