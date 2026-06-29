// 6月23日
// 情報技術科 2年 青山晃大
// 11-sample

#include <stdio.h>

void setw(int b[][5], int dat) {
	int j, k;
	for (j = 0; j < 5; ++j) {
		for (k = 0; k < 5; ++k) {
			b[j][k] = dat;
		}
	}
}

int main(void) {
	int a[5][5];
	int j, k;
	setw(a, 1);
	for (j = 0; j < 5; ++j) {
		for (k = 0; k < 5; ++k) {
			printf("%4d", a[j][k]);
		}
		printf("\n");
	}
	return 0;
}
