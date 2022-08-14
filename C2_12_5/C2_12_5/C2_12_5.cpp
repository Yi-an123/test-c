#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int br(void);
int ic(void);
/*函数声明*/
int main(void)
{
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf("\n");
	br();
	//函数调用
	return 0;
}

int br(void)
{
	printf("Brazil,Russia");
	return 0;
}
//函数定义
int ic(void)
{
	printf("India,China");
	return 0;
}
/*函数定义*/