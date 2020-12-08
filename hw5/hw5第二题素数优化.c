#include<stdio.h>
#include<math.h>
int main()
{
	int n, j;
	scanf_s("%d", &n);

	for (j = 2; j < sqrt(n); j++);
	{
		if (n <= 3)
		{
			printf("%dÊÇËØÊý", n);
		}
		for (j = 2; j <= i; j++)
	{
		if (n % j == 0) {
			break;
		}
		if (j<i) {
			printf("%d²»ÊÇËØÊý", n);
		}
		else
			printf("%dÊÇËØÊý", n);
	}
	return 0;
}
