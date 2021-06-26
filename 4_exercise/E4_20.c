/*E4.20. A program to convert input temperature in celsius into Fahrenheit.*/
#include<stdio.h>
int main(void)
{
	float tempC,tempF;
	printf("Enter the temprature in Celsius : ");
	scanf("%f",&tempC);
	tempF = (tempC * 9/5) + 32;
	printf("Temprature in Fahrenheit is : %f\n", tempF);
	return 0;
}
