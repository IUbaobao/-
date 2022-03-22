
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>//malloc()、exit()
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
		 printf("申请失败\n");
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
	//向顺序表中添加元素
	for (i = 0; i < Size; i++)
	{
		t.head[i] = i + 1;
		t.length++;
	}
	//输出顺序表中元素的函数
	for (i = 0; i < Size; i++)
	{
		printf("%d  ", t.head[i]);
	}
	return 0;
}
