#include <stdio.h>

int main(void) {
	int a, b;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	printf("\n和 = %d\n", a + b);
	printf("差 = %d\n", a - b);
	printf("積 = %d\n", a * b);
	printf("商 = %d\n", a / b);

	return 0;
}
