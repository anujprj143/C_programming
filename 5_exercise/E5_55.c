/*E5_55. Sum of squares of n natural numbers.*/ 
#include<stdio.h>
int main(void)
{
	int i,n,sum;
    printf("Enter n : ");
	scanf("%d",&n);
	
	sum=0;
	for(i=1; i<=n; i++)
		sum+=i*i;
	printf("%d\n",sum);
	return 0;
}
