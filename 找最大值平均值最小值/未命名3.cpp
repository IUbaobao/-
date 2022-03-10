#include<stdio.h>
float max, min;				//因函数只能返回一个数，定义全局变量来存储最大值和最小值
float average(float* p, int size)//设置计算平均值和最大最小值函数
{
	int j ;
	float sum=0;
	for (j = 0; j < size; j++)
	{
		sum += p[j];
		max = min = *p;
		if (max < p[j])		//判断最大值
		{
			max = p[j];
		}
		else if (min >p[j])	//找出最小值
		{
			min =p[j];
		}
	}
	return sum/size;		//返回平均数
}
int main()
{
	float count,arr[10];
	int i;
	printf("Please enter 10 scores:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &arr[i]);
	}
	count = average(arr, 10);
	printf("max=%6.2f,min=%6.2f,average=%6.2f", max, min, count);
	return 0;
}

