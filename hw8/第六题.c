#include<stdio.h>
int main()
{
	int a, i = 0;
	scanf_s("%d", &a);
	while (a != 0) {
		i = i + (a & 1);
		a = a >> 1;
	}
	printf("%d", i);
	return 0;
}