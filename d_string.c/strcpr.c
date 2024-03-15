#include<stdio.h>
#include<string.h>

int main()
{
	char string1[10],string2[10];
	printf("enter the string:");
	scanf("%s",string1);
	printf("enter the string:");
	scanf("%s",string2);
	if(strcmp(string1,string2)==0)
	{
	printf("both string are equal.\n");
	}
	else
	{
	printf("the string are not equal.\n");
	}
	return 0;
}
