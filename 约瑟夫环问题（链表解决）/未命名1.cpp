#include<stdio.h>
struct stu		//先创建一个结构体
{
	int num;
	struct stu* next;
};
int main()
{
	struct stu stu1[13];//定义一个结构体数组
	int i;
	for (i = 0; i < 13; i++)		//把结构体上每一个元素赋值1-13
	{
		stu1[i].num = i + 1;
		if (i == 12)stu1[i].next = &stu1[0];//把最后一名元素中的next放进第一名元素的地址，形成环形
		else stu1[i].next = &stu1[i + 1];//形成链表
	}
	struct stu* p = &stu1[0];
	for (p, i = 0; p->next != p; p = p->next)//循环报数next指针直接跳过下一个变量，指向下下个变量，当next指针指向自己时结束循环。
	{
		i++;
		if (i % 2 == 0)
		{
			p->next = p->next->next;
			i = 0;			//i置零，继续报数
		}
	}
	printf("最后留下的号数为%d", p->num);//输出结果
	return 0;
}
