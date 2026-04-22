#include <stdio.h>

int main(void) {
	int ten[5][3], rank[5];
	int i, j, sum[5] = {0};
	float avg;

	for (i = 0; i < 5; i++) {
		printf("%d人目の得点\n", i + 1);
		for (j = 0; j < 3; j++) {
			switch (j) {
			case 0:
				printf("  国語 = ");
				break;
			case 1:
				printf("  数学 = ");
				break;
			case 2:
				printf("  英語 = ");
				break;
			}
			scanf("%d", & ten[i][j]);
			sum[i] += ten[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
		rank[i] = 1;
		for (j = 0; j < 5; j++) {
			if (sum[j] > sum[i]) rank[i]++;
		}
	}

	printf("\n");
	printf("-------------------得点------------------\n");
	printf("      国語 数学 英語   合計   平均   順位\n");

	for (i = 0; i < 5; i++) {
		printf("%d人目 ", i + 1);
		for (j = 0; j < 3; j++) {
			printf("%4d ", ten[i][j]);
		}
		avg = sum[i] / 3.0;
		printf("  %4d  %5.1f  %4d", sum[i], avg, rank[i]);
		printf("\n");
	}

	return 0;
}
