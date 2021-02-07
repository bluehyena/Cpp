#include <stdio.h>

// Bubble Sort
// 시간복잡도 : O(n^2)
// 옆에 있는 값과 비교하여 큰 수를 뒤로 보낸다.

int main(void) {
	int i, j, temp;
	int arr[10] = { 1, 10, 5, 8, 7 ,6 ,4, 3, 2, 9 };
	for (i = 0; i < 10; ++i) {
		for (j = 0; j < 9 - i; ++j) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; ++i) {
		printf("%d ", arr[i]);
	}
	return 0;
} 