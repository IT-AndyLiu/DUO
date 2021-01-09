#include<stdio.h>
//int a = 100;
int main()
{
	//局部变量和全局变量不要使用相同的变量名，容易误会产生bug
	//当局部变量和全局变量名字相同时，局部变量优先
	int a = 10;
	printf("%d", a);
	return 0;
}
