#include <stdio.h>

int main(void) {
	int a, b, n, i;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	for (i = 0; i < 5; i++) {
		printf("\n1: 足し算  2: 引き算  3: 掛け算\n");
		printf("1~3の番号を選んでください。(%d回目): ", i + 1);
		scanf("%d", &n);

		switch (n) {
		case 1:
			printf("a + b = %d\n", a + b);
			break;
		case 2:
			printf("a - b = %d\n", a - b);
			break;
		case 3:
			printf("a * b = %d\n", a * b);
			break;
		default:
			printf("1~3の値を選択してください。\n");
			break;
		}
	}
	
	return 0;
}
