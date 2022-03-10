
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[3][10],arr1[10];
	int i = 0;
	for (i = 0; i < 3; i++)//接收三个字符串
	{
		gets(arr[i]);
	}
	if ((strcmp(arr[0], arr[1])) > 0)		//比较字符串大小，把大的赋值给arr1
	{
		strcpy(arr1, arr[0]);		
	}
	else
		strcpy(arr1, arr[1]);
	if ((strcmp(arr[2], arr1)) > 0)
	{
		strcpy(arr1,arr[2]);
	}
	printf("\nthe largest : \n %s\n",arr1);	//打印最大的

	return 0;
}
