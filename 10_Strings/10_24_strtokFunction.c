/*P10.24*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[]="...why?but;not?oh!, where	when";
	char seps[] = "?!;,. \t";
	char *t;
	
	
	t=strtok(str, seps);
	 //It returns a pointer to the first character of a token or to a null pointer if there is no token
	while(t!=NULL)
	{
        printf("%s ",t);
		t=strtok(NULL, seps);
	}
	return 0;
}
