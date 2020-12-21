#include<stdio.h>
int main()
{
	int a, b, c, d = 0;
	scanf_s("%d", &a);
	b = a;
	while (b != 0) {
		c = b % 10;
		d = d * 10 + c;
		b = b / 10;
	}
	if (a == d) {
		printf("是回文数");
	}
	else {
		printf("不是回文数");
	}
	return 0;
}