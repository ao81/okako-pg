// 6月16日
// 情報技術科 2年 青山晃大
// 問題9-1

#include <stdio.h>

int swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {
	int x, y;

	printf("x = ");
	scanf("%d", &x);
	printf("y = ");
	scanf("%d", &y);


	swap(&x, &y);
	printf("\nx = %d\ty = %d\n", x, y);
	return 0;
}
