#include <stdio.h>

int main(void) {
	int ten[5][3], i, j;

	for (i = 0; i < 5; i++) {
		printf("生徒%dの得点を入力してください。\n", i + 1);
		for (j = 0; j < 3; j++) {
			if (j == 0) {
				printf("国語: ");
				scanf("%d", &ten[i][j]);
			} else if (j == 1) {
				printf("数学: ");
				scanf("%d", &ten[i][j]);
			} else {
				printf("英語: ");
				scanf("%d", &ten[i][j]);
			}
		}
	}

	printf("--------得点--------\n");
	printf("      国語 数学 英語\n");
	for (i = 0; i < 5; i++) {
		printf("生徒%d ", i + 1);
		for (j = 0; j < 3; j++) {
			printf("%4d ", ten[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
