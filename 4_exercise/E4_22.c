/*E4.22. A program to print a decimal number into Octal and Hexa-decimal*/
#include<stdio.h>
int main(void)
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Octal - %o, Hexadecimal - %x\n",n,n);
	return 0;
}
