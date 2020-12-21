#include<stdio.h>
int x();
int x(int n)
{
	int i;
	i = n & (n - 1);
	if (i == 0) {
		return 0;
	}
	else {
		return -1;
	}
}
int main()
{
	int a, b;
	scanf_s("%d", &a);
	b=x(a);
	printf("%d", b);
	return 0;
}