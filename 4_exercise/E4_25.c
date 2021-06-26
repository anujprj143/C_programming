/*E4.25. Calcuating %age marks of a students having five subject marks as input*/
#include<stdio.h>
int main(void)
{
	float m1,m2,m3,m4,m5,per;
	printf("Enter marks : ");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	per = (m1+m2+m3+m4+m5)/500 * 100;
	printf("Percentage = %f\n",per);
	return 0;
}
