#include <stdio.h>

float sankaku(float x, float y) {
	return x * y / 2;
}

int main(void) {
	float n, m;

	printf("底辺 = ");
	scanf("%f", &n);
	printf("高さ = ");
	scanf("%f", &m);
	printf("面積 ==> %.3f\n", sankaku(n, m));
	
	return 0;
}
