/*13.6. Program to find understand increment/decrement operator in macro definition. */
#include<stdio.h>
#define SQUARE(x)  ((x)*(x))
int main(void)
{
	int k=5,s;
	s=SQUARE(k++);
	printf("s=%d, k=%d\n",s,k);
	return 0;
}
