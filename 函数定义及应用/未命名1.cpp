#include<stdio.h>

void prr(int *p,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		*(p+i)=i;
	}
	
}
void print(int *p,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",*(p+i));
	}
}
int main()
{
	int arr1[10]={0};
	int *p=arr1;
	prr(p,10);
	print(p,10);

	return 0;
}
