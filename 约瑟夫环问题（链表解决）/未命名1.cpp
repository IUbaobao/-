#include<stdio.h>
struct stu		//�ȴ���һ���ṹ��
{
	int num;
	struct stu* next;
};
int main()
{
	struct stu stu1[13];//����һ���ṹ������
	int i;
	for (i = 0; i < 13; i++)		//�ѽṹ����ÿһ��Ԫ�ظ�ֵ1-13
	{
		stu1[i].num = i + 1;
		if (i == 12)stu1[i].next = &stu1[0];//�����һ��Ԫ���е�next�Ž���һ��Ԫ�صĵ�ַ���γɻ���
		else stu1[i].next = &stu1[i + 1];//�γ�����
	}
	struct stu* p = &stu1[0];
	for (p, i = 0; p->next != p; p = p->next)//ѭ������nextָ��ֱ��������һ��������ָ�����¸���������nextָ��ָ���Լ�ʱ����ѭ����
	{
		i++;
		if (i % 2 == 0)
		{
			p->next = p->next->next;
			i = 0;			//i���㣬��������
		}
	}
	printf("������µĺ���Ϊ%d", p->num);//������
	return 0;
}
