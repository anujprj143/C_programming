/*13.7. Program to understand the operation on the arguments in the function call */
#include<stdio.h>
int square(int x)
{
 	return x*x;
}
int main(void)
{
	int k=5,s;
	s=square(k++);
	printf("s=%d,k=%d\n",s,k);
	return 0;
}
