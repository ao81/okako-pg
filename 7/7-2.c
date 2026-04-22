#include <stdio.h>

int main(void) {
	int i, n, b[10] = {0};

	printf("0~9の値を10回入力してください。\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (n < 0 || n >= 10) return 1;
		b[n]++;
	}

	printf("\n");
	for (i = 0; i < 10; i++) printf("[%d]: %d\n", i, b[i]);

	return 0;
}
