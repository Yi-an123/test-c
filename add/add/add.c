#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int result;
	result = add(2, 3);
	printf("%d", result);
	return 0;
}