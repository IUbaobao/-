#include<stdio.h>
void print()//��ӡ�žų˷��� 
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-d\t",j,i,i*j);
		}
		printf("\n");
	}
}
int main()
{
	print();
	return 0;
 } 
