/*
当判断条件特别多的时候可以选择switch语句
if( a=1 ){
	做什么
}
if( a=2 ){
	做什么
}

 */

/*

switch( 表达式 ){
	case: 常量表达式1: 执行代码1  break;
	case: 常量表达式n: 执行代码n  break;
	default: 执行代码块n+1; 
}

switch( day ){
	case 1: 
		执行代码1;
		break;  //跳出本循环, 若没有break会一直向下执行,知道遇到break才会停止
	case 10: 
		执行代码n; 
		break;
	default:   //default 不可以省略, 意思就是除了case之外的都走default这条线
		执行代码块n+1;
		break; 
}

 */

#include <stdio.h>
int main(){
	int score = 100; 
	switch( score/10 ){  //利用除法, 两整数相除,结果为整数(忽略小数位)
		case 10:
		case 9:    // 利用 没有break就会向下执行,知道遇到break才会跳出循环的特性, 可以决定 10, 9 等级为A
			 printf("等级A");
			 break;
		case 8:
			 printf("等级B");
			 break;
		case 7:
		case 6:
			 printf("等级C");
			 break;
		default:
			 printf("等级D");
			 break;
	}
}