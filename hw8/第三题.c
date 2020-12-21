#include<stdio.h>
int main()
{
	char str[1000];
	gets(str);
	int i, l;
	l = strlen(str);
	for (i = 0; i < l / 2; i++) {
		if (str[i] == str[l - i - 1]) {
			printf("是回文字符串");
			break;
		}
		else {
			printf("不是回文字符串");
			break;
		}
	}
	return 0;
}