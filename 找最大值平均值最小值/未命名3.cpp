#include<stdio.h>
float max, min;				//����ֻ�ܷ���һ����������ȫ�ֱ������洢���ֵ����Сֵ
float average(float* p, int size)//���ü���ƽ��ֵ�������Сֵ����
{
	int j ;
	float sum=0;
	for (j = 0; j < size; j++)
	{
		sum += p[j];
		max = min = *p;
		if (max < p[j])		//�ж����ֵ
		{
			max = p[j];
		}
		else if (min >p[j])	//�ҳ���Сֵ
		{
			min =p[j];
		}
	}
	return sum/size;		//����ƽ����
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

