#include<stdio.h>
int GCD(int a, int b)
{
	int tem;
	while (a % b)		//a%b=0ʱ�˳�ѭ��
	{
		tem = a % b;
		a = b;
		b = tem;
	}
	return b;   //���b�������������Լ��
}

int main()
{
	int a, b,num;
	printf("������������\n");
	scanf("%d%d", &a, &b);
	num = GCD(a, b);
	printf("�����������Լ��Ϊ%d\n", num);
	return 0;
}
