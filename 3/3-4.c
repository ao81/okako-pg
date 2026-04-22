#include <stdio.h>

int gokei(int n) {
	int sum = 0;
	int i = 1;

	while (i <= n) {
		sum += i++;
	}

	return sum;
}

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	int sum = gokei(n);
	printf("合計: %d\n", sum);

	return 0;
}
