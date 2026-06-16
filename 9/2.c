// 6月16日
// 情報技術科 2年 青山晃大
// 問題9-2

#include <stdio.h>

void wasa(int w, int x, int *y, int *z) {
	*y = w + x;
	*z = w - x;
}

int main(void) {
	int a, b, wa, sa;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	wasa(a, b, &wa, &sa);
	printf("\na + b = %d\n", wa);
	printf("a - b = %d\n", sa);

	return 0;
}
