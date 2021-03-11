#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	queue<int> Q;
	string a;
	int b;

	for (int i = 0; i < N; ++i) {
		cin >> a;
		if (a == "push") {
			cin >> b;
			Q.push(b);
		}
		else if (a == "pop") {
			if (Q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (a == "size") {
			cout << Q.size() << '\n';
		}
		else if (a == "empty") {
			if (Q.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (a == "front") {
			if (Q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << Q.front() << '\n';
			}
		}
		else if (a == "back") {
			if (Q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << Q.back() << '\n';
			}
		}
	}

	return 0;
}