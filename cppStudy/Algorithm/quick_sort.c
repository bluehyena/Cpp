#include <stdio.h>

// Quick Sort
// 시간복잡도 : O(n * log n)
// 특정한 값을 기준으로 큰 숫자와 작은 숫자를 반으로(두 집합으로) 나눈다.

int number = 10;
int data[10] = { 1, 10, 5, 8, 7, 6, 4 ,3 ,2, 9 };


void quickSort(int* data, int start, int end) {
	if (start >= end) { // 원소가 하나인 경우
		return;
	}
	int key = start; // key 값은 첫번째 원소
	int i = start + 1; // 왼쪽 출발지점
	int j = end; // 오른쪽 출발지점
	int temp;

	while (i <= j) { // 엇갈릴 때 까지 반복
		while (i <= end && data[i] <= data[key]) { // key 값 보다 큰 값을 만날 때 까지 반복, i <= end && data[i] >= data[key] 내림차순
			++i;
		}
		while (data[j] >= data[key] && j > start) { // key 값 보다 작은 값을 만날 때 까지 반복, data[j] <= data[key] && j > start 내림차순
			--j;
		}
		if (i > j) { // 스왑
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else { // 스왑
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

void show() {
	int i;
	for (i = 0; i < number; ++i) {
		printf("%d ", data[i]);
	}
}

int main(void) {
	quickSort(data, 0, number - 1);
	show();
	return 0;
}