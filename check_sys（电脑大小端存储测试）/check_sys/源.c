#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int check_sys()
{
	int a = 1;
	return (*(char*)&a);

}
int main()
{
	int a = check_sys();
	if (a == 1)
	{
		printf("С�˴洢");
	}
	else
		printf("��˴洢");
	return 0;
}