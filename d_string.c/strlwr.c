#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char string[10];
	printf("enter the string:");
	scanf("%s",string);
	for(int i=0;string[i];i++)
	{
	string[i]=tolower(string[i]);
	}
	printf("lowercase string is: %s\n",string);
	return 0;
}
	
