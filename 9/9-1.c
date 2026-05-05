#include <stdio.h>

void swap(int *a, int *b) {
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
	printf("\n");

	swap(&x, &y);
	printf("x = %d\ty = %d\n", x, y);

	return 0;
}
