/*E4.21. A program to Take radius as input and print the Area and perimeter of the circle.*/
#include<stdio.h>
int main(void)
{
	float r,area,perimeter;
	printf("Enter radius of the circle : ");
	scanf("%f",&r);
	area = 22.0/7 * r * r;
	perimeter = 2 * 22.0/7 * r;
	printf("Area=%f, Perimeter=%f\n",area,perimeter);
	return 0;
}
