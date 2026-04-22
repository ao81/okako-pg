#include <stdio.h>

int main(void) {
	int a;

	scanf("%d", &a);
	printf("a = %d\t", a);
	if (0 <= a && a <= 100) {
		printf("合格\n");
	} else if (0 >= a || a >= 100) {
		printf("規格外\n");
	}
	
	return 0;
}
