#include<stdio.h>
int LCM(int m, int n);
int LCM(int m, int n)
{
	int i=1,j;
	j = m * n;
	while (i > 0)
	{
		i = m % n;
		m = n;
		n = i;
	}
	j = j / m;
	return j;
}
int main()
{
	int a, b, c;
	scanf_s("%d%d", &a, &b); 
	c = LCM(a, b);

	printf("%d",c);
	return 0;
}