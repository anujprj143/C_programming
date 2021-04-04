/*P10.38. Finding the Index of the first Non-repeating character in the given String. */
#include<stdio.h>
#include<string.h>
int find_firstNR(char str[]);
int main(void)
{
	char str[50]=" hits ";
	printf("%d\n",find_firstNR(str));
	return 0;
}
int find_firstNR(char str[])
{
	int i,j;
	int end=strlen(str)-1;
	for(i=0; i<end; i++)
	{
		for(j=0; j<=end; j++)
			if(str[i]==str[j] && i!=j)
				break;		
		if(j==end+1)
			return i;
	}
	return -1; 
}
