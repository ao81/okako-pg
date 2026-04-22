#include <stdio.h>

int main(void) {
	int i, n, sum = 0, ave;

	for (i = 0; i < 10; i++) {
		printf("%d回目の入力: ", i + 1);
		scanf("%d", &n);
		sum += n;
	}
	printf("合計 = %d\n", sum);
	ave = sum / 10;
	printf("平均 = %d\n", ave);

	return 0;
}
