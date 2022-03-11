#include<stdio.h>
int strlens(char* p)		//计算字符串长度
{
	int count=0;
	while (*(p++) !='\0')		//  '\0'是字符串结束符
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "IU very happy!";
	printf("arr长度为=%d", strlens(arr));

	return 0;
}
