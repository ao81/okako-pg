// 6月23日
// 情報技術科 2年 青山晃大
// 問題10-1

#include <stdio.h>
#include <string.h>

int main(void) {
	char str[32];
	str[0] = '\0';
	printf("入力: ");
	scanf("%s", str);
	for (char *c = str; *c != '\0'; c++) {
		if (*c >= 'A' && *c <= 'Z') {
			(*c) += 'a' - 'A';
		}
	}
	printf("出力: %s\n", str);
	return 0;
}
