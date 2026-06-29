// 6月23日
// 情報技術科 2年 青山晃大
// 問題11-1

#include <stdio.h>

void sum(int t[5][4]) {
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			t[i][3] += t[i][j];
			t[4][j] += t[i][j];
			t[4][3] += t[i][j];
		}
	}
}

int main(void) {
	int ten[5][4] = { 0 };
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &ten[i][j]);
		}
	}
	sum(ten);
	printf("\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d", ten[i][j]);
		}
		printf("\n");
	}
	return 0;
}

