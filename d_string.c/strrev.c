#include<stdio.h>
#include<string.h>

int main()
{
	 char string[10];
	 printf("enter the string:");
	 scanf("%s",string);
	 printf("string before strrev():%s",string);
	 strrev(string);
	 printf("reverse of the string = %s", strrev(string));
	 return 0;
}

