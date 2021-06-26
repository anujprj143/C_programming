/*E4.1. understanding the operators and expression.*/
#include<stdio.h>
int main(void)
{
	int a=-3;
	a = -a-a+!a;
	printf("%d\n",a);
	return 0;
}
