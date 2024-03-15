#include<stdio.h>

int main()
{
	char str[50];
	int i,c=0;
	printf("enter of the string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]=='a' || str[i]=='A')
	{
	c++;
	}
	}
	printf("total occurence of 'a' (or 'A') is : %d\n",c);
	return 0;
}
