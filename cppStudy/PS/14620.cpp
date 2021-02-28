#include <iostream>

using namespace std;

int arr[10][10];
int arr_price[10][10];

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> arr[j][i];
		}
	}

	for (int i = 1; i < N - 1; ++i) {
		for (int j = 1; j < N - 1; ++j) {
			arr_price[j][i] = arr[j][i] + arr[j - 1][i] + arr[j + 1][i] + arr[j][i + 1] + arr[j][i - 1];
		}
	}
	
	int cheap1 = 201;
	int cheap2 = 201;
	int cheap3 = 201;
	int cheap_x1, cheap_y1;
	int cheap_x2, cheap_y2;
	int cheap_x3, cheap_y3;

	for (int i = 1; i < N - 1; ++i) {
		for (int j = 1; j < N - 1; ++j) {
			if (min(cheap1, arr_price[j][i]) == arr_price[j][i]) {
				cheap1 = arr_price[j][i];
				cheap_x1 = j;
				cheap_y1 = i;
			}
		}
	}

	for (int i = 1; i < N - 1; ++i) {
		for (int j = 1; j < N - 1; ++j) {
			if (abs(cheap_x1 - j) + abs(cheap_y1 - i) < 3) {
				continue;
			}
			else if (min(cheap2, arr_price[j][i]) == arr_price[j][i]) {
				cheap2 = arr_price[j][i];
				cheap_x2 = j;
				cheap_y2 = i;
			}
		}
	}

	for (int i = 1; i < N - 1; ++i) {
		for (int j = 1; j < N - 1; ++j) {
			if (abs(cheap_x1 - j) + abs(cheap_y1 - i) < 3 || abs(cheap_x2 - j) + abs(cheap_y2 - i) < 3) {
				continue;
			}
			else if (min(cheap3, arr_price[j][i]) == arr_price[j][i]) {
				cheap3 = arr_price[j][i];
				cheap_x3 = j;
				cheap_y3 = i;
			}
		}
	}
	
	cout << cheap1 + cheap2 + cheap3;

	return 0;
}