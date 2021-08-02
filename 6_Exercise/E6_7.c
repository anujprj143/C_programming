/*E6.7. Error due to redeclaring variable: Observe output */
#include<stdio.h>
int func(int x,int y);
int main(void)
{
	int p=func(5,6);
	printf("%d",p);
	return 0;
}
int func(int x,int y)
{
	int x=2;  //redeclarng the x variable.
	return x*y;
}

