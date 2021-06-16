/*15.03. A program to understanding the scope of variable x.*/
#include<stdio.h>
void func(void);
int main(void)
{
	int x=5;
	printf("x=%d\t",x);
	func();
	return 0;
}
void func(void)
{
	int x=15;
	printf("x=%d\n",x);
}
