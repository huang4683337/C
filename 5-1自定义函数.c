/**
 *  自定义函数:
 *     格式:  函数类型说明  函数名称 ( 参数类型 参数 )  ==> int sayLove();
 *
 * 	   注意:  自定义函数或者函数的定义 
 * 	   		  必须放在main函数之前,
 * 	          必须在main函数中调用   
 */


#include <stdio.h>


int sayLove();  //自定义的函数必须放在main函数之前
int canShu();

int main()
{
	sayLove();  //自定义函数必须在main函数中执行
	canShu(5);
	return 0;
}

int sayLove()  //自定义函数代码块
{
    printf("%s\n", "自定义函数");
    return 0;
}

//带有参数
int canShu(int n)
{
	printf("%d\n", n);
}