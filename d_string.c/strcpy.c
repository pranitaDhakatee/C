#include<stdio.h>
#include<string.h>

int main()
{
	char source_string[10],dest_string[10];
	printf("enter the string:");
	scanf("%s",source_string);
	strcpy(dest_string,source_string);
	printf("copied string is :%s\n",dest_string);
}
