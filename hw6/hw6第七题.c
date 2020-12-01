#include<stdio.h>
#include<math.h>
int is_prime(int);
int is_prime(int n)
{
	int a, i = (int)sqrt(n);
	if (n <= 3)
		return 0;
	for (a = 2; a <= i; a++)
	{
		if (n % a == 0) {
			return -1;
		}
	}
		return 0;
}
int main()
{
	int j=0, k=2,l;
	while (j < 1000) 
	{
		l = is_prime(k);
		if (l==0) 
		{
			j++;
			if (j >= 100)
			{
				printf("%d ", k);
			}
		}
		k++;
	}
	return 0;
}
