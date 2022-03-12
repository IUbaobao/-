
#include<stdio.h>
#include<time.h>	//初始化随机需要的头文件
#include<stdlib.h>	//生成随机数要用的头文件		
void print()			//菜单
{
	printf("*************************\n");
	printf("*******0.退出游戏********\n");
	printf("*******1.开始游戏********\n");
	printf("*******************&*****\n");

}
void game()
{
	int put = rand() % 100 + 1;		//随机获取1-100的数
	int b;
	printf("请猜数（0—100）");
	while (1)
	{
		
		scanf("%d", &b);		//接收用户输入的数值
		if (b > put)		
			printf("猜大了\n");
		else if (b < put)			//与随机数比较给出提示
			printf("猜小了\n");
		else
		{
			printf("恭喜你猜对了\n");
			break;		//猜对就退出循环
		}

	
	}

}
int main()
{
	srand((unsigned int)time(NULL));	//随机数初始化
	
	int num;
	
	do
	{
		print();			//打印菜单
		printf("请选择>");
		scanf("%d", &num);
		if (num == 0)			//退出条件
		{
			break;
		
		}
		game();		//游戏实现
	} while (num);
	printf("退出成功\n");
	return 0;
}
