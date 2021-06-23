/*E3.3. Understanding the range of int data type*/
#include<stdio.h>
#include<limits.h>
int main(void)
{
	int a=4000000000;
	unsigned int b=4000000000;
	printf("a=%d, b=%u\n",a,b); //priting garbage when limit crosses
	printf("%d, %u\n",INT_MAX,UINT_MAX);
	return 0;
}
