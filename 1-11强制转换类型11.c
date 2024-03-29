/**
 * 格式:  (数据类型) (表达式) 
 */

#include <stdio.h>

int main()
{
	double num = 6.777777; //定义类型为双精度
	int intNum = (int)(num); //将双精度num强制转换为整型
	//作用就是将表达式num的运算结果强制转换成类型说明符int所表示对类型
	printf("%d\n", intNum);
}

/**
 * 注意:  加括号  临时的  砍掉小数位
 * 
 *        数据类型和表达式都必须加括号 (int)(num)
 *
 *        转换后不会改变元数据的类型及变量值,只是在本次计算中临时转换
 *
 *        强制装换不遵循四舍五入规则
 */