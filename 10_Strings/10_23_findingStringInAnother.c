/*P10.23. Finding the second string in the first string*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char *ptr;
	ptr=strstr("placement section","cement");
	//Returns pointer to first occurrence of str2 in str1
	printf("%s\n", ptr);
	return 0;
}
