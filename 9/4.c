// 6月16日
// 情報技術科 2年 青山晃大
// 問題4

#include <stdio.h>

void iswap(int *n1, int *n2) {
	int n;
	n = *n1;
	*n1 = *n2;
	*n2 = n;
}

void maxmin(int data[], int size) {
	int mn = data[0], mx = data[0];
	for (int i = 1; i < size; i++) {
		if (data[i] < mn) mn = data[i];
		if (data[i] > mx) mx = data[i];
	}
	
	printf("\n最大値: %d\n最小値: %d\n", mx, mn);
}

int main(void) {
	int i, j, data[10], sum = 0;
	for (i = 0; i < 10; ++i) {
		printf("data[%d] = ", i);
		scanf("%d", &data[i]);
		sum += data[i];
	}
	for (i = 0; i < 9; ++i) {
		for (j = i + 1; j < 10; ++j) {
			if (data[i] > data[j]) {
				iswap(&data[i], &data[j]);
			}
		}
	}

	printf("\n\n");
	for (i = 0; i < 10; i++) {
		printf("data[%d] = %d\n", i, data[i]);
	}

	printf("\n合計値: %d\n平均値: %.1f\n", sum, sum / 10.0);
	maxmin(data, 10);

	return 0;
}
