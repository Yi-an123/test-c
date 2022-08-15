#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int one_three(void)
{
	printf("one");
	return 0;
}

int two(void)
{
	printf("two");
	return 0;
}

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("\n");
	two();
	printf("\n");
	printf("three\n");
	printf("done!\n");
	return 0;
}