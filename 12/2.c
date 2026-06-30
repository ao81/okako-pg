// 問題2
// ６月３０日
// 情報技術科 2年 青山晃大

#include <stdio.h>

struct psrec {
	int pcode;
	char *pname;
	char *ptel;
};

struct psrec ftbl[5] = {
	1000, "大本", "033-123-1234",
	1011, "山田", "0864-23-1323",
	1022, "田中", "0722-26-9965",
	1033, "川本", "056-123-1234",
	1044, "藤原", "0966-32-5897",
};

int main(void) {
	int i;
	for (i = 0; i < 5; i++) {
		printf("%04d [%-10s]  TEL %s\n",
			ftbl[i].pcode, ftbl[i].pname, ftbl[i].ptel);
	}
	return 0;
}
