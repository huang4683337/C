/*

goto: 具有跳出循环的能力

goto: 去哪儿;  => goto 语句标号;  =>  语句标号是一个标识符,默认英文大写
      当程序执行到goto这块的时候,  会直接跳到 语句标号处
 */

// #include <stdio.h>
// int main(){
// 	int sum = 0;
// 	int i = 1;
// 	LOOP: if(i<=10){
// 		sum += i;
// 		i++;
// 		goto LOOP; // 执行到此处就会跳到 LOOP: 处 ==> 能实现循环的功能
// 	}
// 	printf("sum=%d\n",sum);
// 	return 0;
// }


#include <stdio.h>
int main()
{
    int sum = 0;
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%d\n", i);
        if( i == 3 ){
            goto LOOP;  //相当于break的效果
        }                   
    }
    LOOP: printf("结束for循环了....");  
    return 0;    
}