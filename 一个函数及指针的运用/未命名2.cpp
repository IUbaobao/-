
#include<stdio.h>
void prr(int* p, int size)//数组初始化函数
{
	int i;
	for (i = 0; i < size; i++)
	{
		*(p + i) = i;
	}

}
void print(int* p, int size)//打印数组内容函数
{
	int i;
	printf("函数实现的数组初始化元素\n");
	for (i = 0; i < size; i++)
	{
		printf(" %d ", *(p + i));
	}printf("\n");
}
int main()
{
	int arr[11];
	int* p1 = arr; //将数组首元素地址赋值给p 
	int i;
	int arr3[10] = { 0 };
	int* p = arr3;
	prr(p, 10);		//初始化数组 
	print(p, 10);	//打印数组

	for (i = 0; i < 11; i++)	//初始化数组 
	{
		*(p1 + i) = i;
	}
	printf("主函数实现数组元素：\n");
	for (i = 0; i < 11; i++) //打印数组内容 
	{
		printf(" %d ", *(p1 + i));
	}
	printf("\n指针运用");

	int* arr1[11];				//定义一个指针数组 
	int* (*arr2)[11] = &arr1;		//定义一个数组指针而且将指针数组arr1的地址传给arr2 

	arr1[1] = arr;				//将数组arr地址赋值给指针数组arr1 
	printf("\n  arr1=%p", arr1);		//打印arr1首元素地址 ,arr[0] 
	printf("\n  arr+1=%p", arr1 + 1);		//打印arr1后一个元素地址 ，也就是arr1[1] 
	printf("\n  arr2=%p", *arr2);			//打印arr2内的内容，也就是arr1的地址  
	printf("\n  (arr2+1)=%p", arr2 + 1);		//打印越过数组指针arr1的地址,arr2+1是越过整一个数组 

	return 0;
}

