#include <stdio.h>

// Selection Sort
// 시간복잡도 : O(n^2)
// 탐색을 하면서 가장 작은수를 하나씩 앞으로 보낸다.

int main(void) {
	int i, j, min, index, temp; //i , j 배열 탐색에 이용, min 최솟값, index 가장작은 원소의 값, temp swap을 위한용도;
	int arr[10] = { 1, 10, 5, 8, 7 ,6 ,4, 3, 2, 9 };
	for (i = 0; i < 10; ++i) {
		min = 99999;
		for (j = i; j < 10; ++j) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	for (i = 0; i < 10; ++i) {
		printf("%d ", arr[i]);
	}
	return 0;
}