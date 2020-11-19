#include<stdio.h>
int main()
{
	int a, b;
	for(a=1;a<10;a++){
		for (b = 1; b < 10; b++) {
			if (a <= b) {
				printf("%d*%d=%d\t", a, b, a * b);
			}
		}
		printf("\n");
	}
	return 0;
}