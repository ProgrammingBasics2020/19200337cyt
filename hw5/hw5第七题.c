#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, i, j;
	scanf_s("%d%d%d", &a, &b, &c);
	i = pow(a, b);
	j = i % c;
	printf("%d", j);
	return 0;
}
//我感觉用pow函数已经是很快的一个运算了