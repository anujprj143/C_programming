/*14.12. A program of Inserting a number y in number x such that the number y should occupy n bits in x starting at position p. Assuming that number y can fit in the given n bits*/
#include<stdio.h>
void displayBits(int x);
unsigned func(unsigned x,unsigned y,int p,int n); 
int main(void)
{
	int p=13,n=6;
	unsigned x=0x23173b4,y=0x2F;
	displayBits(x);
	displayBits(y);
	x=func(x,y,p,n);
	displayBits(x);
	return 0;
}
unsigned func(unsigned x,unsigned y,int p,int n) 
{
	unsigned mask = ~(~0<<n)<<p-n+1;  
	return (x&~mask)|(y<<p-n+1);
}
void displayBits(int x)
{
	int i,mask;
	for(i=31; i>=0; i--)
	{
		mask = 1<<i;
		putchar((x & mask)?'1':'0'); /*Test and print ith bit*/		
		if(i%8==0)
			putchar(' '); /*Space after 8 bits*/
	}
	printf("\n");
}
