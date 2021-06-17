/*15.05. A simple program to understand the register variable. */
#include<stdio.h>
int main(void)
{
	register int i;
	for(i=0; i<20000; i++)
		printf("%d\n",i);
	return 0;
}

//only difference in Register and Automatic variable is that register variable are stored in Register while Automatic variable are stored in memory. 
