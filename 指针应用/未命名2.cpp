#include<stdio.h>

int main()
{
	int arr[11];
	int *p1=arr; //将数组首元素地址赋值给p 
	int i;
	for(i=0;i<11;i++)	//初始化数组 
	{
		*(p1+i)=i;
	}
	for(i=0;i<11;i++) //打印数组内容 
	{
		printf("%d ",*(p1+i));
	}
	int *arr1[11];				//定义一个指针数组 
	int* (*arr2)[11]=&arr1;		//定义一个数组指针而且将指针数组arr1的地址传给arr2 
	
	arr1[1]=arr;				//将数组arr地址赋值给指针数组arr1 
	printf("\narr1[0]=%p",arr1);		//打印arr1首元素地址 ,arr[0] 
	printf("\narr1[1]%p",arr1+1);		//打印arr1后一个元素地址 ，也就是arr1[1] 
	printf("\narr2=%p",*arr2);			//打印arr2内的内容，也就是arr1的地址  
	printf("\n(arr2+1)=%p",arr2+1);		//打印越过指针数组arr1的地址,arr2+1是越过整一个数组 
	
	return 0;
 } 
