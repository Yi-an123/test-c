#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int smile(void)
{
	printf("Smile!");
	return 0;
}
int main(void)
{
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	return 0;
}