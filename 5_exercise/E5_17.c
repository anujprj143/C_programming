/*E5_17*/
#include<stdio.h>
int main(void)
{
	int x=2,y=20;
    switch(x)
	{   
		y=30; //statement will never be executed.
        case 1: 
			y++;
			break;
		case 2:
			y--;
			break;
		default:
			y=y+2;
	}
	printf("y is %d\n",y);
	return 0;
}
