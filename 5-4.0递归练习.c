#include <stdio.h>

int getAge(int num){
	int age;
	if(num < 1)
	{
		printf("请输入大于0的整数\n");
		return 0;
	}
	else if(num == 1)
	{
		age = 10;
	}
	else age = getAge(num-1)+2;
	return age;
}

int main()
{
	int lasterAge = getAge(-1);
	printf("第五个人的年龄是%d岁", lasterAge);
	return 0;
}