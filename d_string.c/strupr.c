#include<stdio.h>
#include<ctype.h>
int main()
{
	char string[10];
	printf("enter the string:");
	scanf("%s",string);
	for(int i = 0;i<10;i++)
	{
		string[i] = toupper(string[i]);
	}
	printf("uppercase string is %s\n",string);
	
}
