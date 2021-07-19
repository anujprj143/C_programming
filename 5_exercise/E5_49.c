/*E5_49. Prime Number between 1 and 100.*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,num;
	
	for(num=2; num<=99; num++)
	{
        for(i=2; i<=sqrt(num); i++)	
			if(num%i == 0)
				break;
		if(i>sqrt(num))
			printf("%d\t",num);
	}
	return 0;
}


//to run this program use this command in case it shows error for squrt function..
// gcc E5_49.c -lm
