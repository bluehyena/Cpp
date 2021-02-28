#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;

		int prior_x, prior_y;
		int x, y;
		bool areYouHappy = true;

		for (int j = 0; j < n + 2; ++j) {
			cin >> x >> y;
			if (j == 0) {
				prior_x = x;
				prior_y = y;
			}
			if ( abs(x - prior_x) + abs(y - prior_y) <= 1000) {
				prior_x = x;
				prior_y = y;
			}
			else {
				areYouHappy = false;
			}
		}

		if (areYouHappy) {
			cout << "happy" << '\n';
		}
		else {
			cout << "sad" << '\n';
		}
	}

	return 0;
}