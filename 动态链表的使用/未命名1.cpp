
#include<stdio.h>
#include<malloc.h>
#define LEN sizeof(struct student)

int n;
struct student				//����һ���ṹ��
{
	int num;
	float sore;  
	struct student* next;	//����������һ��Ԫ�صĵ�ַ
};
struct student* vore()			//����һ����������Ϊstruct student*�Ķ�̬������
{
	struct student* head, * p1, * p2;
	head = NULL;		
	p1 = p2 = (struct student*)malloc(LEN);					//ʹ�ö�̬�ڴ濪��һ���ռ�
	scanf("%d,%f", &p1->num, &p1->sore);
	n = 0;
	while (p2->num != 0)
	{
		n = n + 1;
		if (n == 1) head = p1;						//���ȵ�һ�ν����������׵�ַ��ֵ��head
		else p1->next = p2;						//Ȼ���ڵ�һ��Ԫ�غ�ѵڶ���Ԫ�صĵ�ַ��ֵ��ȥ
		p1 = p2;								
		p2 = (struct student*)malloc(LEN);		//�ٿ�����һ��Ԫ�ؿռ�
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
