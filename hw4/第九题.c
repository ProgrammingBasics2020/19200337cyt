#include<stdio.h>
int main()
{
	int a, b,c;
	scanf_s("%d %d", &a, &b);
	c = a ^ b;
	a = a ^ c;
	b = b ^ c;
	printf("%d %d", a, b);
	return 0;
}