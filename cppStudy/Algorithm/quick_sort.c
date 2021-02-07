#include <stdio.h>

// Quick Sort
// �ð����⵵ : O(n * log n)
// Ư���� ���� �������� ū ���ڿ� ���� ���ڸ� ������(�� ��������) ������.

int number = 10;
int data[10] = { 1, 10, 5, 8, 7, 6, 4 ,3 ,2, 9 };


void quickSort(int* data, int start, int end) {
	if (start >= end) { // ���Ұ� �ϳ��� ���
		return;
	}
	int key = start; // key ���� ù��° ����
	int i = start + 1; // ���� �������
	int j = end; // ������ �������
	int temp;

	while (i <= j) { // ������ �� ���� �ݺ�
		while (i <= end && data[i] <= data[key]) { // key �� ���� ū ���� ���� �� ���� �ݺ�, i <= end && data[i] >= data[key] ��������
			++i;
		}
		while (data[j] >= data[key] && j > start) { // key �� ���� ���� ���� ���� �� ���� �ݺ�, data[j] <= data[key] && j > start ��������
			--j;
		}
		if (i > j) { // ����
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else { // ����
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