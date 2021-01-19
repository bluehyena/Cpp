/*
별 찍기
N을 입력 받고,  N층으로 이루어진 피라미드를 출력하는 프로그램을 작성하라.

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