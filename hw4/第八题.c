#include<stdio.h>
int f(int n)//itoa�޷����У����������д�ģ������ҷ��ֺ�������̫�С���дһ����λ�������2.8.16���Ƶĺ��������ǳ��˵����⣬Ҫ����Ū���ˣ��ٷ���ȥ��
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