#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int jolly(void);
int deny(void);
/*��������*/
int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	//��������
	return 0;
}
int jolly(void)
{
	printf("For he's jolly good fellow!\n");
	return 0;
	//��������
}
int deny(void)
{
	printf("Which nobody can deny!\n");
	return 0;
	//��������
}