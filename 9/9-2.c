#include <stdio.h>

void wasa(int w, int x, int *y, int *z) {
	*y = w + x;
	*z = w - x;
}

int main(void) {
	int a, b;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("\n");

	int c, d;
	wasa(a, b, &c, &d);
	printf("a + b = %d\n", c);
	printf("a - b = %d\n", d);

	return 0;
}