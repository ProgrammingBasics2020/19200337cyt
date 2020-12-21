#include<stdio.h>
int GCD_recursive(int m, int n);
int GCD_iterative(int m, int n);
int GCD_recursive(int m, int n)
{
	int i=1;
	while (i>0)
	{
		i = m % n;
		m = n;
		n = i;
	}
	return m;
}
int GCD_iterative(int m, int n)
{
	if (n == 0)
		return m;
	else
        return GCD_iterative(n,m%n);
}
int main()
{
	int a,b,r1,r2;
	scanf_s("%d%d", &a, &b); //a>b,求求了让a大吧，懒得交换了...
	r1 = GCD_recursive(a, b);
	r2 = GCD_iterative(a, b);
	printf("%d\n%d", r1, r2);
	return 0;
}