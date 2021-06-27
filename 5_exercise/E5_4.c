/*Understanding the flow control.. if statement.. Observe the output.*/
#include<stdio.h>
int main(void)
{	
	int a=20,b=3;
	if(a<10)
	    a=a-5;
		b=b+5;
	printf("%d   %d\n",a,b);
	return 0;
} 
