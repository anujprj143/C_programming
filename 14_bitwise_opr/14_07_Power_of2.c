/*14.07. Check whether a number is a power of 2 or not*/
#include<stdio.h>
int main(void)
{
	unsigned n;
	printf("Enter n : ");
	scanf("%d",&n);
	if((n&(n-1))==0)  /*parentheses around (n&(n-1)) are necessary as precedence of == is more than that of & */			
		printf("%d is power of 2\n",n);
	else
		printf("%d is not power of 2\n",n);
	return 0;
}
