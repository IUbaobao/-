
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>//malloc()��exit()
#define Size 100
typedef struct stu
{
	int* head;
	int length;
	int size;
}stu;

 stu initstu()
{
	 stu t;
	 t.head = (int*)malloc(Size * sizeof(int));
	 if (!t.head)
	 {
		 printf("����ʧ��\n");
		 exit(1);
	 }
	 t.length = 0;
	 t.size = Size;
	 return t;
}
int main()
{
	stu t= initstu();
	
	int i;
	//��˳��������Ԫ��
	for (i = 0; i < Size; i++)
	{
		t.head[i] = i + 1;
		t.length++;
	}
	//���˳�����Ԫ�صĺ���
	for (i = 0; i < Size; i++)
	{
		printf("%d  ", t.head[i]);
	}
	return 0;
}
