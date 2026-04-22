#include <stdio.h>

int main(void) {
	int n, sum;

	printf(" n\tsum\n");
	for (n = 1, sum = 0; sum < 100; n++) {
		sum += n;
		printf("%2d\t%3d\n", n, sum);
	}

	return 0;
}
