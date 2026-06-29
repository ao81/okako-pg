// 6月23日
// 情報技術科 2年 青山晃大
// 問題10-2

#include <stdio.h>
#include <string.h>

int main(void) {
	char a[32] = "岡山県立";
	char b[16] = "岡山工業";
	char c[16] = "高等学校";
	printf("%s%s%s\n", a, b, c);
	strcat(a, b);
	strcat(a, c);
	printf("%s\n", a);
	return 0;
}
