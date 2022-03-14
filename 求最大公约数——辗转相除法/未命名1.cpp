#include<stdio.h>
int GCD(int a, int b)
{
	int tem;
	while (a % b)		//a%b=0时退出循环
	{
		tem = a % b;
		a = b;
		b = tem;
	}
	return b;   //最后b就是两数的最大公约数
}

int main()
{
	int a, b,num;
	printf("请输入两个数\n");
	scanf("%d%d", &a, &b);
	num = GCD(a, b);
	printf("这两数的最大公约数为%d\n", num);
	return 0;
}
