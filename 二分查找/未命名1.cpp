//���ֲ��� 
#include<stdio.h>
int main()
{
	int right, left, num,count ,arr[] = {1,2,3,4,5,6,7,8,9,10};
	right = sizeof(arr) / sizeof(arr[0]);  //�������鳤�ȣ���ֵ����right
	left = 0;
	scanf("%d", &num);
	while (left <= right)	//���left>right˵��û�����Ԫ��
	{
		count = (right + left) / 2;		//ȡ�м�Ԫ�����Ƚ�
		if (num > arr[count])				//Ҫ��Ԫ�ش����м�Ԫ�أ��Ͱ�left���¸�ֵ���м�����һ��Ԫ��
			left = count + 1;
		else if (num < arr[count])			//Ҫ��Ԫ��С���м�Ԫ�أ��Ͱ�right���¸�ֵ���м���ǰһ��Ԫ��
			right = count - 1;
		else									//��left<=right�������²����������if����˵���ҵ���
		{
			printf("�ҵ��ˣ��±�Ϊ%d\n", count);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ���\n");
		}

	}
	return 0;
}
