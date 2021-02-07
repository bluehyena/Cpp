#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N;
	int result = 0;

	cin >> N;

	vector<int> vec(N);

	for (int i = 0; i < N; ++i) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());
	
	for (int i = N-1; i > ; i +=2) {


	}

	cout << result;

	return 0;
}