#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100];
	int i,len;
	int c=0;
	printf("enter the string if it is a palindrome:");
	scanf("%s",str1);
	len=strlen(str1);
	for(i=0;i<len;i++)
	{
	if(str1[i] !=str1[len-i-1])
	{
	c=1;
	break;
	}
	}
	if(c)
	{
	printf("string is a palindrome %s\n",str1);
	}
	else
	{
	printf("string is a not palindrom %s\n",str1);
	}
	return 0;
}
