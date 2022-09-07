#define _CRT_SECURE_NO_WARNINGS 1
//floaterr.c--—› æ…·»Î¥ÌŒÛ
#include<stdio.h>
int main(void)
{
	float a, b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f\n", a);

	return 0;
}