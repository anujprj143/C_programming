/*E5_30. Simple Excercise on For loop containing if.*/
#include<stdio.h>
int main(void)
{
	int i=1;
	for( ; ; )
		if(i++==3)
			break;	
	printf("%d ",i);
	
	i=1;
	while( )
		if(i++==3)
			break;
	printf("%d ",i);
	return 0;
}
