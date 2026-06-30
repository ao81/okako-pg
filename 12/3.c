// 問題3
// ６月３０日
// 情報技術科 2年 青山晃大

#include <stdio.h>

struct data {
	int n;
	char *name;
	double height;
	double weight;
};

struct data d[5] = {
	0, "大 川", 175.5, 72.3,
	1, "斎 藤", 180.5, 75.0,
	2, "藤 岡", 165.5, 65.0,
	3, "近 藤", 170.0, 68.5,
	4, "北 川", 168.5, 66.0,
};

int main(void) {
	int i;
	printf("　  氏 名  身 長  体 重\n");
	for (i = 0; i < 5; i++) {
		printf("%-2d  %s  %.1lf  %.1lf\n",
			d[i].n, d[i].name, d[i].height, d[i].weight);
	}
	return 0;
}
