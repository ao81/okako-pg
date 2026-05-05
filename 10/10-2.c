#include <stdio.h>

int main(void) {
	char a[16] = "岡山県立";
	char b[16] = "岡山工業";
	char c[16] = "高等学校";

	char res[16 * 3];
	strcpy(res, a);
	strcat(res, b);
	strcat(res, c);

	printf("%s\n", res);
	return 0;
}