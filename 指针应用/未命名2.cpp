#include<stdio.h>

int main()
{
	int arr[11];
	int *p1=arr; //��������Ԫ�ص�ַ��ֵ��p 
	int i;
	for(i=0;i<11;i++)	//��ʼ������ 
	{
		*(p1+i)=i;
	}
	for(i=0;i<11;i++) //��ӡ�������� 
	{
		printf("%d ",*(p1+i));
	}
	int *arr1[11];				//����һ��ָ������ 
	int* (*arr2)[11]=&arr1;		//����һ������ָ����ҽ�ָ������arr1�ĵ�ַ����arr2 
	
	arr1[1]=arr;				//������arr��ַ��ֵ��ָ������arr1 
	printf("\narr1[0]=%p",arr1);		//��ӡarr1��Ԫ�ص�ַ ,arr[0] 
	printf("\narr1[1]%p",arr1+1);		//��ӡarr1��һ��Ԫ�ص�ַ ��Ҳ����arr1[1] 
	printf("\narr2=%p",*arr2);			//��ӡarr2�ڵ����ݣ�Ҳ����arr1�ĵ�ַ  
	printf("\n(arr2+1)=%p",arr2+1);		//��ӡԽ��ָ������arr1�ĵ�ַ,arr2+1��Խ����һ������ 
	
	return 0;
 } 
