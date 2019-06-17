/*
递归: 函数在自己函数体内调用自己
 */

#include <stdio.h>

int factorial(int n)
{
	int result;
	if(n < 0)
	{
		printf("输入错误!!\n");
		return 0;
	}
	else if(n == 0 || n == 1)
	{
		result = 1;
	}
	else
	{
		result = factorial(n-1)*n; //调用自身
	}
	return result;
}

int main()
{
	int n = 5;
	printf("%d的阶乘=%d\n", n, factorial(n) );
	return 0;
}