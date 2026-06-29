// 6月23日
// 情報技術科 2年 青山晃大
// 問題11-2

#include <stdio.h>

void sum(int t[5][5]) {
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			t[i][3] += t[i][j];
			t[4][j] += t[i][j];
			t[4][3] += t[i][j];
		}
	}
}

void rank(int t[5][5]) {
	int mn, i, j, r = 1;
	int tmp[4];
	int minIdx;

	for (i = 0; i < 4; i++) tmp[i] = t[i][3];

	for (i = 0; i < 4; i++) {
		mn = 1000;
		minIdx = -1;
		for (j = 0; j < 4; j++) {
			if (tmp[j] < mn) {
				mn = tmp[j];
				minIdx = j;
			}
		}
		t[minIdx][4] = r++;
		tmp[minIdx] = 1000;
	}
}

int main(void) {
	int ten[5][5] = { 0 };
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &ten[i][j]);
		}
	}
	sum(ten);
	rank(ten);
	printf("\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == 4 && j == 4) break;
			printf("%4d", ten[i][j]);
		}
		printf("\n");
	}
	return 0;
}

