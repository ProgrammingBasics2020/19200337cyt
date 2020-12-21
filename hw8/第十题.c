#include<stdio.h>
#include<string.h>
int main()
{
	char str[101];
	gets(str);
	int i, j, k;
	j = strlen(str) - 1;
	for (i = 0; i < j; i++, j--) {
		k = str[i];
		str[i] = str[j];
		str[j] = k;
	}
	printf("%s",str);
	return 0;
}