
#include<stdio.h>
#include<time.h>	//��ʼ�������Ҫ��ͷ�ļ�
#include<stdlib.h>	//���������Ҫ�õ�ͷ�ļ�		
void print()			//�˵�
{
	printf("*************************\n");
	printf("*******0.�˳���Ϸ********\n");
	printf("*******1.��ʼ��Ϸ********\n");
	printf("*******************&*****\n");

}
void game()
{
	int put = rand() % 100 + 1;		//�����ȡ1-100����
	int b;
	printf("�������0��100��");
	while (1)
	{
		
		scanf("%d", &b);		//�����û��������ֵ
		if (b > put)		
			printf("�´���\n");
		else if (b < put)			//��������Ƚϸ�����ʾ
			printf("��С��\n");
		else
		{
			printf("��ϲ��¶���\n");
			break;		//�¶Ծ��˳�ѭ��
		}

	
	}

}
int main()
{
	srand((unsigned int)time(NULL));	//�������ʼ��
	
	int num;
	
	do
	{
		print();			//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d", &num);
		if (num == 0)			//�˳�����
		{
			break;
		
		}
		game();		//��Ϸʵ��
	} while (num);
	printf("�˳��ɹ�\n");
	return 0;
}
