/*E4.24. A program to take two numbers as input and print their difference if first number is greater than second else printing their sum ...Using ternary operator*/
#include<stdio.h>
int main(void)
{
	int x,y;
	printf("Enter two numbers : ");
	scanf("%d%d",&x,&y);
	x>y ? printf("%d\n",x-y): printf("%d\n",x+y); 
	return 0;
}
