#include <stdio.h>

int main(void) {
	float a, b;

	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);

	printf("\n和 = %7.2f\n", a + b);
	printf("差 = %7.2f\n", a - b);
	printf("積 = %7.2f\n", a * b);
	printf("商 = %7.2f\n", a / b);

	return 0;
}
