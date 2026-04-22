#include <stdio.h>

int main(void) {
	int n = 1, sum = 0;

	printf(" n\tsum\n");
	while (sum < 100) {
		sum += n;
		printf("%2d\t%3d\n", n, sum);
		n++;
	}
	
	return 0;
}
