#include <iostream>
#include <algorithm>

using namespace std;

int price[1001];

bool Descending(int a, int b) {
	return a > b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; ++i) {
		cin >> price[i];
	}
	
	sort(price, price + N, Descending);

	for (int i = 0; i < N; ++i) {
		if ()
	}

	return 0;
}