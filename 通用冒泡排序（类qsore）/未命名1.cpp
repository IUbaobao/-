//qsore����ʹ��
//ģ��qsortʵ��һ��ð�������ͨ���㷨
#include<stdio.h>
#include<stdlib.h>
void Swap(char* buff1, char* buff2, int width)
{
	int i;
	for (i = 0; i < width; i++)
	{
		char tem = *buff1;
		*buff1 = *buff2;
		*buff2 = tem;
		buff1++;
		buff2++;
	}
}
//base�����׵�ַ��sz����Ԫ�س��ȣ�widthԪ��ռ���ٸ��ֽڣ�cmpԪ�رȽϵķ�ʽ�ĺ�����Ԫ�����return 0������return �����������С����returnС�������
void bubble_sort(void *base,int sz,int width,int (*cmp)(const void* e1,const void* e2))
{
	int i, j;
	for (i = 0; i < sz; i++)
	{	//һ�˵�����
		for (j = 0; j < sz - i - 1; j++)
		{
			//����Ԫ�رȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}

int cmp(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[] = { 1,3,4,2,6,5,7,8,9,10 };
	//qsort(arr, sizeof(arr) / sizeof(arr[0]), 4, cmp);
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), 4, cmp);
	
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", arr[j]);
	}
	
	return 0;
}
