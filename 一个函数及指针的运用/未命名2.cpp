
#include<stdio.h>
void prr(int* p, int size)//�����ʼ������
{
	int i;
	for (i = 0; i < size; i++)
	{
		*(p + i) = i;
	}

}
void print(int* p, int size)//��ӡ�������ݺ���
{
	int i;
	printf("����ʵ�ֵ������ʼ��Ԫ��\n");
	for (i = 0; i < size; i++)
	{
		printf(" %d ", *(p + i));
	}printf("\n");
}
int main()
{
	int arr[11];
	int* p1 = arr; //��������Ԫ�ص�ַ��ֵ��p 
	int i;
	int arr3[10] = { 0 };
	int* p = arr3;
	prr(p, 10);		//��ʼ������ 
	print(p, 10);	//��ӡ����

	for (i = 0; i < 11; i++)	//��ʼ������ 
	{
		*(p1 + i) = i;
	}
	printf("������ʵ������Ԫ�أ�\n");
	for (i = 0; i < 11; i++) //��ӡ�������� 
	{
		printf(" %d ", *(p1 + i));
	}
	printf("\nָ������");

	int* arr1[11];				//����һ��ָ������ 
	int* (*arr2)[11] = &arr1;		//����һ������ָ����ҽ�ָ������arr1�ĵ�ַ����arr2 

	arr1[1] = arr;				//������arr��ַ��ֵ��ָ������arr1 
	printf("\n  arr1=%p", arr1);		//��ӡarr1��Ԫ�ص�ַ ,arr[0] 
	printf("\n  arr+1=%p", arr1 + 1);		//��ӡarr1��һ��Ԫ�ص�ַ ��Ҳ����arr1[1] 
	printf("\n  arr2=%p", *arr2);			//��ӡarr2�ڵ����ݣ�Ҳ����arr1�ĵ�ַ  
	printf("\n  (arr2+1)=%p", arr2 + 1);		//��ӡԽ������ָ��arr1�ĵ�ַ,arr2+1��Խ����һ������ 

	return 0;
}

