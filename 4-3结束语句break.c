/**
 * break:
 *   跳出当前循环
 */

// #include <stdio.h>
// int main(){
// 	int i, sum;
// 	for(i=0, sum=0; i<10; i++){
// 		printf("输出第%d次\n", i);
// 		if( i == 5 ){
// 			printf("哎呀肚子疼\n");
// 			printf("停止训练...\n");
// 			break;  //跳出当前循环
// 		}
		
// 	}
// 	return 0;
// }




/**
 * continue:
 *   结束本次循环执行下面的
 */

#include <stdio.h>
int main(){
	int i;
	for(i=0; i<10; i++){
		if( i == 5 ){
			printf("我去接电话\n");
			continue; //结束本次循环
		}
		printf("运球第%d\n", i);
	}
	printf("今天训练到此结束\n");
	return 0;
}