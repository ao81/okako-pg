#include <stdio.h>

int main(void) {
	char ch;

	printf("小文字を入力してください: ");
	scanf("%c", &ch);

	if ('a' <= ch && ch <= 'z') {
		printf("=> %c\n", ch - ('a' - 'A'));
	} else {
		printf("エラー: 小文字を入力してください。\n");
	}
	
	return 0;
}
