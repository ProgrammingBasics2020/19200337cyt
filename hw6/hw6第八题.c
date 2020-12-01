#include<stdio.h>
int fac_bit_count(int);
int fac_bit_count(int n)
{
	int a;
	for (a = (n-1); a >0; a--)
	{
		n = n * a;
	}
	return n;
}
int main()
{
	int n,i,j=0;
	scanf_s("%d",&n);
	i = fac_bit_count(n);
	while (i != 0)
	{
		i = i / 10;
		j++;
	}
	printf("%d ",j);
	return 0;
}
