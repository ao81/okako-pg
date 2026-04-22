#include <stdio.h>

int main(void) {
	int n;

	printf("１～１２までの数を入力してください。: ");
	scanf("%d", &n);
	switch(n){
		case 1: printf("１月です。\n"); break;
		case 2: printf("２月です。\n"); break;
		case 3: printf("３月です。\n"); break;
		case 4: printf("４月です。\n"); break;
		case 5: printf("５月です。\n"); break;
		case 6: printf("６月です。\n"); break;
		case 7: printf("７月です。\n"); break;
		case 8: printf("８月です。\n"); break;
		case 9: printf("９月です。\n"); break;
		case 10: printf("１０月です。\n"); break;
		case 11: printf("１１月です。\n"); break;
		case 12: printf("１２月です。\n"); break;
	}
	
	return 0;
}
