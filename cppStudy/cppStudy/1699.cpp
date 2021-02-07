#include <iostream>
#include <math.h>
using namespace std;

int dp[100001] = { 0, 1, 2, 3, 1 };

int main() {
	int N;
	cin >> N;
	for (int i = 2; i <= sqrt(N); ++i) {
		dp[i * i] = 1;
		for(int j = 2; j < i)
			if (i == j) {
				dp[i * j] = 0;
			}
			else {
				dp[j * i] = ;
			}
	}
	cout << dp[N];
	return 0;
}