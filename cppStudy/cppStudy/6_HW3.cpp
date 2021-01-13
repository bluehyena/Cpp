// 정수 N을 입력 받고, 1부터 N까지의 합을 출력하는 프로그램을 작성하라.
// (N >= 1)

// 셋중에 반복문 스타일은 어떤걸 많이 쓰는지?


// * do while 을 사용한 풀이

#include <iostream>

using namespace std;

int main()
{
	int N;
	int sum = 0;
	int index = 0;

	cout << "number :";
	cin >> N;

	// do while 도 프로젝트 할때 {} 띄어써야 하나? while의 위치는?
	
	do
	{
		sum += index;
		++index;
	} while (N - index >= 0);

	cout << "Sum of 1 to " << N << " = " << sum << endl;

	return 0;
}

/*

* for 문을 사용한 풀이

#include <iostream>

using namespace std;

int main()
{
	int N;
	int sum = 0;

	cout << "number :";
	cin >> N;

	for (int index = N; index > 0; index--)
	{
		sum += index;
	}

	cout << "Sum of 1 to " << N << " = " << sum << endl;

	return 0;
}

*/

/*

* while 문을 사용한 풀이

#include <iostream>

using namespace std;

int main()
{
	int N;
	int sum = 0;
	int index = 0;

	cout << "number :";
	cin >> N;

	while (N - index >= 0)
	{
		sum += index;
		++index;
	}

	cout << "Sum of 1 to " << N << " = " << sum << endl;

	return 0;
}
*/