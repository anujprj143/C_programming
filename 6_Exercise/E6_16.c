/*E6.16. defining function inside main function.*/
#include<stdio.h>
main()
{
	int func(int a,int b)
	{
		return (a+b);
	}
	int c;
	c=func(3,5);
	printf("%d",c);
	return 0;
}
