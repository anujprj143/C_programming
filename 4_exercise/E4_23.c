/*E4.23. A program to take a number as input and print remainder after it is divided by 3.*/
#include<stdio.h>
int main(void)
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Remainder = %d\n",n%3);
	return 0;
}
