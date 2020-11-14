#include<stdio.h>
int f(int n)//itoa无法运行，这个是重新写的，但是我发现好像负数不太行。想写一个用位运算算出2.8.16进制的函数，但是出了点问题，要是我弄好了，再发上去。
{
    int p = 1, y = 0, yushu;
    while (1)
    {
        yushu = n % 2;
        n /= 2;
        y += yushu * p;
        p *= 10;
        if (n < 2)
        {
            y += n * p;
            break;
        }
    }
    return y;
}
int main()
{
	int a,b;
	scanf_s("%d", &a);
	b = f(a);
	printf("%d\n%o\n%X", b,a,a);
	return 0;
}