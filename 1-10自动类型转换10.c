/**
 * 在c语言中我们可以通过赋值对数据的类型进行一个转换
 *
 * char类型数据转换为int类型数据遵循ASCII码中的对应值，ASCII码请查看WIKI。
 *
 * 注：字节小的可以向字节大的自动转换，但字节大的不能向字节小的自动转换
 */


//特点: 赋值转换成对应ASCll码  字节从小到大

#include <stdio.h>

int main()
{
	char c='a';  //单引号
	int x;
	double d;
	x = c;  //将字符型的c 赋值给整型x, 则x为c的值所对应的ASCII码,也就是a的ASCII码
	d = c;  //d的值为浮点型
	printf("%d\n", x);
	printf("%f\n", d);
	return 0; 
}