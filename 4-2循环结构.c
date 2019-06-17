/**
 * while(){}
 * do{}while()
 */

/**
 * 在知道循环次数存情况下使用 => for循环
 *
 * 在不知道循环次数的情况下使用while, 或者do-while循环
 */


/**
 * for (表达式1; 表达式2; 表达式3)
 *   表达式1: 控制变量的初始值
 *   表达式2: 终止条件
 *   表达式3: 每循环一次,变量按照什么方式变化
 *
 *   注意: 表达式之间的 ;  不能少
 */
#include <stdio.h>
int main()
{	
	int sum = 0;
	// for ( int num = 0; num < 10; num++)
	for ( int num = 0, a = 1; num < 10; num++) //表啊是1 可以定义多个变量
	{
		sum += num;
		a *= num+1;
		printf("num=%d,sum=%d, a=%d\n",num, sum, a);
	}
	return 0;
}