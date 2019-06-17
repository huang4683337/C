/*
返回值: 函数被动用之后, 执行函数体中的代码块 所取得的并返回给主调函数的结果
 
1- 函数的值只能通过 return语句返回给主调函数
   return 表达式   or  return (表达式)

2- 函数值的类型应该和函数定义中函数的类型保持一致
   char option(){ return 'A' }
   int  option(){ return 0 }

3- 没有返回值的函数, 返回的类型为void
   void noResult()
   { 
   		printf("没有返回值\n")
   		return; 
   	}

   注意: void函数中 可以有执行的代码块, 
         但是不能有返回值

         如果void函数中有return语句, 该语句只能起到结束函数运行的功能
         格式为 return;


 */


#include <stdio.h>

char optionHave(char n)
{
	return n;
}

void optionNo(){
	printf("我就是没有返回值\n");
	return;
}

int main()
{
	char a = 'a';
	printf("%c\n\n", optionHave(a));
	optionNo();
	return 0;
}
