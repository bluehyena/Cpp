// unsolved
#include <iostream>
#include <algorithm>

using namespace std;

long arr_n[100001];
long arr_m[100001];

int main() {
	int N, M;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		cin >> arr_n[i];
	}
	cin >> M;
	for (int i = 1; i <= M; ++i) {
		cin >> arr_m[i];
	}

	sort(arr_n, arr_n + N);

	for (int i = 1; i <= M; ++i) {
		

	}

	for (int i = 1; i <= M; ++i) {
		cout << arr_m[i] << '\n';
	}
	return 0;
}