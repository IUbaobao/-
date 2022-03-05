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
		printf("Ð¡¶Ë´æ´¢");
	}
	else
		printf("´ó¶Ë´æ´¢");
	return 0;
}