// 6月16日
// 情報技術科 2年 青山晃大
// サンプル

#include <stdio.h>

void iswap(int *n1, int *n2) {
	int n;
	n = *n1;
	*n1 = *n2;
	*n2 = n;
}

int main(void) {
	int i, j, data[3];
	for (i = 0; i < 3; ++i) {
		printf("data[%d] = ", i);
		scanf("%d", &data[i]);
	}
	for (i = 0; i < 2; ++i) {
		for (j = i + 1; j < 3; ++j) {
			if (data[i] < data[j]) {
				iswap(&data[i], &data[j]);
			}
		}
	}
	printf("\n\n");
	for (i = 0; i < 3; i++) {
		printf("data[%d] = %d\n", i, data[i]);
	}
	return 0;
}
