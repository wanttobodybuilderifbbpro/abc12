#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("�� ���� ���ڸ� ������ �������� �Է� ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c) {
		printf("\n ���� ū �� : %d", a);
	}
	else if (b > a && b > c) {
		printf("\n ���� ū �� : %d", b);
	}
	else {
		printf("\n ���� ū �� : %d", c);
	}

	printf("\n");

	return 0;
}