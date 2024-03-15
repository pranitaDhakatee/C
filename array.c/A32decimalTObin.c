
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]={'\0'};
	int n;
	int r;
	char s[100]={'\0'};
	int i;
	printf("enter of the deci num:");
	scanf("%d",&n);
	i=n;
	while(i>0)
	{
	r=i%2;
	sprintf(str,"%d",r);
	strcat(s,str);
	i=i/2;
	}
	int lenght=strlen(s);
	for(int j=0;j<lenght/2;j++)
	{
	char temp=s[j];
	s[j]=s[lenght-1-j];
	s[lenght-1-j]=temp;
	}
	printf("binary :%s\n",s);
	return 0;
}

	
