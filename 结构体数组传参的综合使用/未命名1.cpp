
//��10��ѧ��, ÿ��ѧ�������ݰ���ѧ�š�������3�ſγ̵ĳɼ�, �Ӽ�������10��ѧ������,
//Ҫ�����3�ſγ���ƽ���ɼ�, �Լ���߷ֵ�ѧ��������(����ѧ�š�������3�ſγ̳ɼ���ƽ������)��
#include<stdio.h>
#define N 10				//�궨��

struct Stu			//����һ���ṹ������
{
	int num;
	char name[20];
	float score[3];
};

float  Min, Aversc1, Aversc2, Aversc3,Aversc4;//����ȫ�������洢ƽ���ֺ���Сֵ
int n;//������¼����ѧ��


void input(struct Stu stu[], int size);//��������
void PutMax(struct Stu stu[], int size);//��������
void print(struct Stu stu[]);//��������
int main()
{
	
	struct Stu stu[N];//����һ���ṹ������
	input(stu, N);//���ú���
	 PutMax(stu, N);
	 print(stu);

	return 0;
}

void PutMax(struct Stu stu[], int size)
{
	float Max = stu[0].score[0] + stu[0].score[1] + stu[0].score[2];//�Ȱѵ�һ��ѧ���ĳɼ��ܺ͸�ֵ��Max
		float tem;//����temΪ�м�����ҵ����ֵ
	int i;
	for (i = 0; i < size; i++)
	{
		Aversc1 += (stu[i].score[0]) / size;			//���һ��ƽ��ֵ
		Aversc2 += ( stu[i].score[1]) / size;			//��ڶ���ƽ��ֵ
		Aversc3 += (stu[i].score[2]) / size;			//�������ƽ��ֵ
		tem = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];//�Ѹ�ѧ�����ܳɼ���ֵ��tem
		if (Max < tem)	//Max��tem�Ƚϣ��ҵ��ܷ����ֵ
		{
			Max = tem;
			n = i;//�ҵ����ֵ����Ȼ��ֵ��n
		}
		Aversc4 = (stu[n].score[0] + stu[n].score[1] + stu[n].score[2]) / 3;//���ܷ�����ѧ���ĵ�ƽ���ɼ�
	}

}
void input(struct Stu stu[], int size)//���뺯��ʵ��
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("�밴ѧ�ţ����������ųɼ��÷�˳�������%d��ѧ������Ϣ:\n", i + 1);
		scanf("%d%s%f%f%f", &stu[i].num, &stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}

}

void print(struct Stu stu[])	//�������ʵ��
{
	printf("��һ�ųɼ���ƽ����Ϊ%f\n", Aversc1);
	printf("�ڶ��ųɼ���ƽ����Ϊ%f\n", Aversc2);
	printf("�����ųɼ���ƽ����Ϊ%f\n", Aversc3);
	printf("��߷ֵ�ѧ������ϢΪ\nѧ��:%d \n����:%s\n���ųɼ��ֱ��ǣ�%f  %f  %f\n", stu[n].num, stu[n].name,stu[n].score[0], stu[n].score[1], stu[n].score[2]);
	printf("���ųɼ�ƽ����Ϊ��%f\n", Aversc4);
}

