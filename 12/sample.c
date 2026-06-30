// サンプル問題
// ６月３０日
// 情報技術科 2年 青山晃大

#include <stdio.h>

struct time {
	int hour;
	int minute;
	int second;
};

void jikan(int byou, struct time *p) {
	p->second = byou % 60;
	p->minute = byou / 60 % 60;
	p->hour = byou / 60 / 60 % 24;
}

int main(void) {
	int sec;
	struct time t;

	printf("秒数を入力してください ===> ");
	scanf("%d", &sec);
	jikan(sec, &t);
	printf("\n");
	printf("%d秒 ===> ", sec);
	printf("%d時間 ", t.hour);
	printf("%d分 ", t.minute);
	printf("%d秒\n", t.second);

	return 0;
}
