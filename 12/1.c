// 問題1
// ６月３０日
// 情報技術科 2年 青山晃大

#include <stdio.h>

struct test {
	int koku;
	int su;
	int ei;
};

int main(void) {
	struct test t;

	printf("国語の点数 = ");
	scanf("%d", &t.koku);
	printf("数学の点数 = ");
	scanf("%d", &t.su);
	printf("英語の点数 = ");
	scanf("%d", &t.ei);

	int sum = t.koku + t.su + t.ei;
	printf("\n");
	printf("合計: %d\n", sum);
	printf("平均: %.1f\n", sum / 3.0);

	return 0;
}
