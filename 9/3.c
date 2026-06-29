// 6月16日
// 情報技術科 2年 青山晃大
// 問題9-3

#include <stdio.h>

void iswap(int *n1, int *n2) {
	int n;
	n = *n1;
	*n1 = *n2;
	*n2 = n;
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
	return 0;
}
