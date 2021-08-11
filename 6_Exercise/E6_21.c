/*E6.21 Exercise- predict output.*/
#include<stdio.h>
void func(int a,int b);
int main(void)
{
	int i=5,j=10;
	func(i/2,j%3);
	return 0;
}
void func(int a,int b)
{
	a/=2;
	b--;
	printf("%d\t",a+b);
}

