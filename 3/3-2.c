#include <stdio.h>

int wa(int x, int y) {
	return x + y;
}

int sa(int x, int y) {
	return x - y;
}

int main(void) {
	int a, b;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	printf("\n和: %d\n", wa(a, b));
	printf("差: %d\n", sa(a, b));
	
	return 0;
}
