#define _CRT_SECURE_NO_WARNINGS 1
/* charcode.c-��ʾ�ַ��Ĵ�����*/
#include<stdio.h>
int main(void)
{
	char ch;
	
	printf("Pleasee enter a character.\n");
	scanf("%c", &ch);/*�û������ַ�*/
	printf("The code for %c is %d.\n", ch, ch);
	return 0;
}