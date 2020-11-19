#include<stdio.h>
#include<math.h>
int main()
{
	int n, j;
	scanf_s("%d", &n);

	for (j = 2; j < sqrt(n); j++);
	{
		if (n <= 2)
		{
			printf("%d是素数", n);
		}
		if (n > 2)
		{
			if (n % j == 0)
				printf("%d不是素数", n);
			else
				printf("%d是素数", n);
		}
	}
	return 0;
}