// 6月23日
// 情報技術科 2年 青山晃大
// 10-sample

#include <stdio.h>
#include <string.h>

int main(void) {
	int i;
	char text1[21], text2[11];
	printf("mojiretu=");
	scanf("%s", text2);
	strcpy(text1, "mojiretu=");
	strcat(text1, text2);
	for (i = 0; text1[i] != '\0'; ++i) {
		if ('a' <= text1[i] && text1[i] <= 'z') {
			text1[i] -= 'a' - 'A';
		}
	}
	printf("\n");
	printf("%s\n", text1);
	return 0;
}
