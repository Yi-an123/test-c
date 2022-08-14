#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int meters = 10;
	scanf("%d", &meters);
	double cms = meters * 2.54;
	printf("%lf\n", cms);
	return 0;
}