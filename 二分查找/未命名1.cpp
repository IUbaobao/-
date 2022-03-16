//二分查找 
#include<stdio.h>
int main()
{
	int right, left, num,count ,arr[] = {1,2,3,4,5,6,7,8,9,10};
	right = sizeof(arr) / sizeof(arr[0]);  //计算数组长度，把值赋给right
	left = 0;
	scanf("%d", &num);
	while (left <= right)	//如果left>right说明没有这个元素
	{
		count = (right + left) / 2;		//取中间元素来比较
		if (num > arr[count])				//要找元素大于中间元素，就把left重新赋值成中间往后一个元素
			left = count + 1;
		else if (num < arr[count])			//要找元素小于中间元素，就把right重新赋值成中间往前一个元素
			right = count - 1;
		else									//在left<=right的条件下不满足上面的if，则说明找到了
		{
			printf("找到了，下标为%d\n", count);
			break;
		}
		if (left > right)
		{
			printf("找不到\n");
		}

	}
	return 0;
}
