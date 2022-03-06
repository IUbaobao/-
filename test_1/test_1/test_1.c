#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int gongyueshu(int a, int b)
{
	int tem = 0;
	while (a % b)
	{
		tem = a % b;
		a = b;
		b = tem;

	}
	return b;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", gongyueshu(a, b));

	return 0;
}