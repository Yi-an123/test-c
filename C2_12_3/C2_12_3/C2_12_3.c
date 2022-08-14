#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define DAYS_PER_YEAR 365
//预编译指定一年的天数
/*任务：把年龄转换为日期，不计算闰年*/
int main(void)
{
	int age, days;
	age = 31;//假设年龄为31
	days = age * DAYS_PER_YEAR;
	printf("Your age is %d, and it is %d days.\n", age, days);
	return 0;
}