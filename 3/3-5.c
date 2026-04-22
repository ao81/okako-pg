#include <stdio.h>

int gokei(int x) {
	int sum = 0;

	while (x != 0 && x > 0) {
		sum += x;
		x--;
	}
	
	return sum;
}

int main(void) {
	int n = 1;

	printf("n = ");
	scanf("%d", &n);
	while (n > 0) {
		printf("合計: %d\n", gokei(n));
		printf("n = ");
		scanf("%d", &n);
	}

	return 0;
}
