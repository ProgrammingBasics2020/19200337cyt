#include<stdio.h>
int main()
{
	char str[1000];
	gets(str);
	int i, l;
	l = strlen(str);
	for (i = 0; i < l / 2; i++) {
		if (str[i] == str[l - i - 1]) {
			printf("�ǻ����ַ���");
			break;
		}
		else {
			printf("���ǻ����ַ���");
			break;
		}
	}
	return 0;
}