/*E5_29. Simple Excercise on For loop.*/
#include<stdio.h>
int main(void)
{
	int i,sum;
	for(i=0; i<10; i+=3)
		sum+=i*i;
	printf("%d\n",sum);
	return 0;
}
