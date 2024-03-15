#include<stdio.h>
#include<string.h>

int main()
{
	char string[10];
	printf("the len of string:");
	scanf("%s",string);
	int len = strlen(string);
	printf("length of string is %d\n",len);
	return 0;
}


