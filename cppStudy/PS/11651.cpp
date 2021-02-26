#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Ascending(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main() {
	int N;
	cin >> N;

	vector<pair<int, int>> v;
	int x, y;

	for (int i = 0; i < N; ++i) {
		cin >> x >> y;
		v.push_back({ x, y });
	}

	sort(v.begin(), v.end(), Ascending);

	for (int i = 0; i < N; ++i) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}