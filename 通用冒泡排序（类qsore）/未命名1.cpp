//qsore函数使用
//模仿qsort实现一个冒泡排序的通用算法
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
//base数组首地址，sz数组元素长度，width元素占多少个字节，cmp元素比较的方式的函数，元素相等return 0，大于return 大于零的数，小于则return小于零的数
void bubble_sort(void *base,int sz,int width,int (*cmp)(const void* e1,const void* e2))
{
	int i, j;
	for (i = 0; i < sz; i++)
	{	//一趟的排序
		for (j = 0; j < sz - i - 1; j++)
		{
			//两个元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
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
