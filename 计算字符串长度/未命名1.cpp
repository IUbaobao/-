#include<stdio.h>
int strlens(char* p)		//�����ַ�������
{
	int count=0;
	while (*(p++) !='\0')		//  '\0'���ַ���������
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "IU very happy!";
	printf("arr����Ϊ=%d", strlens(arr));

	return 0;
}
