#include<stdio.h>

int main()
{
	char names[5][10];
	int i;
	printf("enter of the 5 names:\n");
	for(i=0;i<5;i++)
	scanf("%s",names[i]);
	printf("you have name:\n");
	for(i=0;i<5;i++)
	printf("%s\n",names[i]);
}
