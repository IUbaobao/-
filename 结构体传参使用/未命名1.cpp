#include<stdio.h>

struct Stu			//����һ���ṹ������
{
	int num;
	char name[20];
	float score;
};
void print(struct Stu stu[], int size);//��������
void input(struct Stu stu[], int size);//��������
int main()
{
	struct Stu stu[5];//����һ���ṹ������
	input(stu, 5);//���ú���
	print(stu, 5);//���ú���
	return 0;
}
void print(struct Stu stu[], int size)//��ӡ����ʵ��
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("��%d��ѧ������Ϣ:", i + 1);
		printf("ѧ�ţ�%d ������%s �÷֣�%f\n", stu[i].num, stu[i].name, stu[i].score);
	}
}
void input(struct Stu stu[], int size)//���뺯��ʵ��
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("�밴ѧ�ţ��������÷�˳�������%d��ѧ������Ϣ:\n", i + 1);
		scanf("%d%s%f", &stu[i].num, &stu[i].name, &stu[i].score);
	}

}
