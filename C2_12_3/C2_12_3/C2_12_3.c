#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define DAYS_PER_YEAR 365
//Ԥ����ָ��һ�������
/*���񣺰�����ת��Ϊ���ڣ�����������*/
int main(void)
{
	int age, days;
	age = 31;//��������Ϊ31
	days = age * DAYS_PER_YEAR;
	printf("Your age is %d, and it is %d days.\n", age, days);
	return 0;
}