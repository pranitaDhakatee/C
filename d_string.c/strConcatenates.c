#include<stdio.h>
#include<string.h>
int main()
{
	char string1[10],string2[10];
	printf("enter the string1:");
	scanf("%s",string1);
	printf("enter the string2:");
	scanf("%s",string2);
	strcat(string1,string2);
	printf("concatenated string is %s\n",string1);
}
	
