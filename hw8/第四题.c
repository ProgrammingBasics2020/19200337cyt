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
		printf("�ǻ�����");
	}
	else {
		printf("���ǻ�����");
	}
	return 0;
}