#include <stdio.h> 
/*
#include <stdio.h>
是一条预处理命令,
作用是为了通知c语言编译系统
在对c程序正式编译之前做的一些预处工作
 */

int main() //主函数  也就是实现某些代码逻辑的代码块
//注意: 在最新的c的标准中,mian函数的类型为 int 而不是void
{
	printf("I Live imooc!\n");
	// printf  为输出语句

	return 0;
}

