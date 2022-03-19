#include<stdio.h>

struct Stu			//创建一个结构体类型
{
	int num;
	char name[20];
	float score;
};
void print(struct Stu stu[], int size);//函数声明
void input(struct Stu stu[], int size);//函数声明
int main()
{
	struct Stu stu[5];//定义一个结构体数组
	input(stu, 5);//调用函数
	print(stu, 5);//调用函数
	return 0;
}
void print(struct Stu stu[], int size)//打印函数实现
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("第%d个学生的信息:", i + 1);
		printf("学号：%d 姓名：%s 得分：%f\n", stu[i].num, stu[i].name, stu[i].score);
	}
}
void input(struct Stu stu[], int size)//输入函数实现
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("请按学号，姓名，得分顺序输入第%d个学生的信息:\n", i + 1);
		scanf("%d%s%f", &stu[i].num, &stu[i].name, &stu[i].score);
	}

}
