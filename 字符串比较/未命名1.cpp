
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[3][10],arr1[10];
	int i = 0;
	for (i = 0; i < 3; i++)//���������ַ���
	{
		gets(arr[i]);
	}
	if ((strcmp(arr[0], arr[1])) > 0)		//�Ƚ��ַ�����С���Ѵ�ĸ�ֵ��arr1
	{
		strcpy(arr1, arr[0]);		
	}
	else
		strcpy(arr1, arr[1]);
	if ((strcmp(arr[2], arr1)) > 0)
	{
		strcpy(arr1,arr[2]);
	}
	printf("\nthe largest : \n %s\n",arr1);	//��ӡ����

	return 0;
}
