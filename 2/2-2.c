#include <stdio.h>

int main(void) {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	printf("合計点 = %d\t平均点 = %5.1f\n", a + b + c, (a + b + c) / 3.0);

	return 0;
}
