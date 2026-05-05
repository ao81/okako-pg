#include <stdio.h>

int main(void) {
	char s[256];
	printf("input = ");
	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 'a' - 'A';
		}
	}
	printf("output = %s\n", s);
	return 0;
}