#include<stdio.h>
int f(int n)
{
	if (n == 1)
		return 1;
	return n * f(n - 1);
}
int main()
{
	int a;
	scanf("%d", &a);
	int sum = f(a);
	printf("%d�Ľ׳�Ϊ=%d\n", a, sum);
	return 0;
}
