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
//�Ҹо���pow�����Ѿ��Ǻܿ��һ��������