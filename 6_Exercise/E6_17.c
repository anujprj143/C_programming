/*E6.17. We can also define function after main.*/
#include<stdio.h>
void display(int,int);
int main(void)
{
	int x=15;
	float y=290.5;
	display(x,y);
	return 0;
}
void display(int a,int b)
{
	printf("%d   %d\n",a,b);
}
