#include<stdio.h>
#define p 3.14
int main()
{
	double r, s, c;
	printf("«Î ‰»Î∞Îæ∂:");
	scanf_s("%lf", &r);
	s = r * r * p;
	c = 2 * p * r;
	printf("s=%lf\nc=%lf", s, c);
	return 0;
}