/*E6.10. Observe the error when function not returning anything.*/
#include<stdio.h>
void func(int x,int y);
int main(void)
{
	int x;
	x=func(5,6)+100;
	printf("%d",x);
	return 0;
}
void func(int x,int y)
{
	int z;
	z=x+y;
}

