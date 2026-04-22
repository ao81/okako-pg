#include <stdio.h>

int main(void) {
	int ten[5][3], i, j, sum;
	float ave;

	for (i = 0; i < 5; i++) {
		printf("生徒%dの得点を入力してください。\n", i + 1);
		for (j = 0; j < 3; j++) {
			switch(j) {
				case 0:
					printf("国語: ");
					break;
				case 1:
					printf("数学: ");
					break;
				case 2:
					printf("英語: ");
					break;
			}
			scanf("%d", &ten[i][j]);
		}
	}

	printf("\n");
	printf("---------------得点---------------\n");
	printf("      国語 数学 英語   合計  平均\n");
	for (i = 0; i < 5; i++) {
		sum = 0;
		printf("生徒%d ", i + 1);
		for (j = 0; j < 3; j++) {
			printf("%4d ", ten[i][j]);
			sum += ten[i][j];
		}
		ave = sum / 3.0;
		printf("  %4d  %3.1f", sum, ave);
		printf("\n");
	}
}
