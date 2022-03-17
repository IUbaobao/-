
#include<stdio.h>
#include<malloc.h>
#define LEN sizeof(struct student)

int n;
struct student				//定义一个结构体
{
	int num;
	float sore;  
	struct student* next;	//用来储存下一个元素的地址
};
struct student* vore()			//定义一个返回类型为struct student*的动态链表函数
{
	struct student* head, * p1, * p2;
	head = NULL;		
	p1 = p2 = (struct student*)malloc(LEN);					//使用动态内存开辟一个空间
	scanf("%d,%f", &p1->num, &p1->sore);
	n = 0;
	while (p2->num != 0)
	{
		n = n + 1;
		if (n == 1) head = p1;						//首先第一次进来把链表首地址赋值给head
		else p1->next = p2;						//然后在第一个元素后把第二个元素的地址赋值过去
		p1 = p2;								
		p2 = (struct student*)malloc(LEN);		//再开辟下一个元素空间
		scanf("%d,%f", &p2->num, &p2->sore);
	}
	return head;
}
void print(struct student* head)
{
	struct student* p = head;
	do 
	{
		printf("\nNow,These %d records are:\n", n);
		printf("%d,%f\n", p->num, p->sore);
		p = p->next;
	} while (p->next != NULL);
}

int main()
{
	struct student* p = vore();
	print(p);
	return 0;
}
