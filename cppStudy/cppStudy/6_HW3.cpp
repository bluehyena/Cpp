// ���� N�� �Է� �ް�, 1���� N������ ���� ����ϴ� ���α׷��� �ۼ��϶�.
// (N >= 1)

// * do while �� ����� Ǯ��

#include <iostream>

using namespace std;

int main()
{
	int N;
	int sum = 0;
	int index = 0;

	cout << "number :";
	cin >> N;
	
	do
	{
		sum += index;
		++index;
	} while (N - index >= 0);

	cout << "Sum of 1 to " << N << " = " << sum << endl;

	return 0;
}

/*

* for ���� ����� Ǯ��

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

* while ���� ����� Ǯ��

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