// 0~100の整数10個入力、合計と最大、最小値を求める。
// 最大、最小値はmaxmin()を作成

// void maxmin(int d[], int size, int fsum, intfmux, int *fmin) {}
// maxmin(data[], 10, &sum, &max, &min)

#include <stdio.h>

void maxmin(int d[], int size, int *fsum, int *fmax, int *fmin) {
	for (int i = 0; i < size; i++) {
		if (*fmax < d[i]) *fmax = d[i];
		if (*fmin > d[i]) *fmin = d[i];
		*fsum += d[i];
	}
}

int main(void) {
	int data[10];
	for (int i = 0; i < 10; i++) scanf("%d", &data[i]);
	int sm = 0, mx = 0, mn = 100;
	maxmin(data, 10, &sm, &mx, &mn);
	printf("合計 = %d\n", sm);
	printf("最大 = %d\n", mx);
	printf("最小 = %d\n", mn);
	return 0;
}