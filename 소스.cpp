#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("세 개의 숫자를 공백을 기준으로 입력 ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c) {
		printf("\n 가장 큰 수 : %d", a);
	}
	else if (b > a && b > c) {
		printf("\n 가장 큰 수 : %d", b);
	}
	else {
		printf("\n 가장 큰 수 : %d", c);
	}

	printf("\n");

	return 0;
}