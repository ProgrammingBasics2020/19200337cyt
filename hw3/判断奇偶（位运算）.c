#include<stdio.h>
int main()
{
	int n = 110;
	int flag = (~(n ^ 1) & n);
	printf("%d\n", flag);
	return 0;
}