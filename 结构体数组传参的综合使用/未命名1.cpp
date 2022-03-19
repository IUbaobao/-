
//有10个学生, 每个学生的数据包括学号、姓名、3门课程的成绩, 从键盘输入10个学生数据,
//要求输出3门课程总平均成绩, 以及最高分的学生的数据(包括学号、姓名、3门课程成绩、平均分数)。
#include<stdio.h>
#define N 10				//宏定义

struct Stu			//创建一个结构体类型
{
	int num;
	char name[20];
	float score[3];
};

float  Min, Aversc1, Aversc2, Aversc3,Aversc4;//定义全局用来存储平均分和最小值
int n;//用来记录最大的学号


void input(struct Stu stu[], int size);//函数声明
void PutMax(struct Stu stu[], int size);//函数声明
void print(struct Stu stu[]);//函数声明
int main()
{
	
	struct Stu stu[N];//定义一个结构体数组
	input(stu, N);//调用函数
	 PutMax(stu, N);
	 print(stu);

	return 0;
}

void PutMax(struct Stu stu[], int size)
{
	float Max = stu[0].score[0] + stu[0].score[1] + stu[0].score[2];//先把第一个学生的成绩总和赋值给Max
		float tem;//借助tem为中间变量找到最大值
	int i;
	for (i = 0; i < size; i++)
	{
		Aversc1 += (stu[i].score[0]) / size;			//求第一科平均值
		Aversc2 += ( stu[i].score[1]) / size;			//求第二科平均值
		Aversc3 += (stu[i].score[2]) / size;			//求第三科平均值
		tem = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];//把给学生的总成绩赋值给tem
		if (Max < tem)	//Max与tem比较，找到总分最大值
		{
			Max = tem;
			n = i;//找到最大值序数然后赋值给n
		}
		Aversc4 = (stu[n].score[0] + stu[n].score[1] + stu[n].score[2]) / 3;//求总分最大的学生的的平均成绩
	}

}
void input(struct Stu stu[], int size)//输入函数实现
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("请按学号，姓名，三门成绩得分顺序输入第%d个学生的信息:\n", i + 1);
		scanf("%d%s%f%f%f", &stu[i].num, &stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}

}

void print(struct Stu stu[])	//输出函数实现
{
	printf("第一门成绩的平均分为%f\n", Aversc1);
	printf("第二门成绩的平均分为%f\n", Aversc2);
	printf("第三门成绩的平均分为%f\n", Aversc3);
	printf("最高分的学生的信息为\n学号:%d \n姓名:%s\n三门成绩分别是：%f  %f  %f\n", stu[n].num, stu[n].name,stu[n].score[0], stu[n].score[1], stu[n].score[2]);
	printf("三门成绩平均分为：%f\n", Aversc4);
}

