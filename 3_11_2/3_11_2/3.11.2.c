#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int input;
	printf("Enter a value of char int ASCII:");
	scanf("%d", &input);
	//ͨ��scanf()������ȡ�û����룬���洢��input������
	printf("You input value is %d,and char is %c\n", input, input);
	//ͨ��ת��˵����%d��%c��ӡ������ֵ���ַ�
	return 0;
}