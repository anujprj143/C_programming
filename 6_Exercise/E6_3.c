/*E6.3.Function of type "Takes nothing returns nothing" */
#include<stdio.h>
int func(void);
int main(void)
{
	int x=10;	
	x=func();
	printf("%d\n",x);
	return 0;
}
int func(void)
{
	printf("Function\n");
} 
