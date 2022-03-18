
#include<stdio.h>
int f(int n)
{
	if (n <=2)
		return 1;
	return f(n-1)+ f(n - 2);
}
int main()
{
	int a;
	scanf("%d", &a);
	int sum = f(a);
	printf("%d\n",sum);
	return 0;
}
