// 問題4
// ６月３０日
// 情報技術科 2年 青山晃大

#include <stdio.h>

struct data {
	int n;
	char *name;
	double height;
	double weight;
	double bmi;
};

struct data d[5] = {
	0, "大川", 175.5, 72.3, 0,
	1, "斎藤", 180.5, 75.0, 0,
	2, "藤岡", 165.5, 65.0, 0,
	3, "近藤", 170.0, 68.5, 0,
	4, "北川", 168.5, 66.0, 0,
};

void bmi(struct data *t) {
	t->bmi = t->weight / (t->height / 100.0 * t->height / 100.0);
}

int main(void) {
	int i;
	for (i = 0; i < 5; i++) {
		bmi(&d[i]);
		printf("%d  [%-8s] 身長 %.1lf(cm) 体重 %.1lf(kg) BMI %.1lf\n",
			d[i].n, d[i].name, d[i].height, d[i].weight, d[i].bmi);
	}
	return 0;
}
