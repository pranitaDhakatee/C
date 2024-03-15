#include<stdio.h>
#include<string.h>
int main()
{
	char string1[10],string2[10];
	printf("enter the string1:");
	scanf("%s",string1);
	printf("enter the string2:");
	scanf("%s",string2);
		if(strstr(string1,string2)==NULL)
			printf("subsstring ids not found\n");
		else
			printf("string2 is a substring of string1\n");
			return 0;
}
