/*P10.35. Removing a perticular letter from the string. Skip if that letter we get.*/
#include<stdio.h>
#include<string.h>
void del_char(char *str,char ch);
int main(void)
{
	char str[50]="You are you, I'am Anuj Prajapati";
	del_char(str,'u');	
	puts(str);
	return 0;
}
void del_char(char *str,char ch)
{
	unsigned int i,j;
	for(i=0,j=0; i<=strlen(str)-1; i++)
		if(str[i]!=ch)
			str[j++]=str[i];
	str[j]='\0';
}
