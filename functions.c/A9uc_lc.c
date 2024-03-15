#include<stdio.h>
#include<String.h>
#include<ctype.h>
void countUL(char str[])
{
int uc=0;
int lc=0;
int length=strlen(str);
for(int i=0;i<length;i++)
{
if(isupper(str[i]))
{
uc++;
}
else if(islower(str[i]))
{
lc++;
}
}
printf("NO.of uc char:%d\n",uc);
printf("NO.of lc char:%d\n",lc);
}
int main()
{
char inputstring[1000];
printf("enter a string:");
fgets(inputstring,sizeof(inputstring),stdin);
inputstring[strcspn(inputstring,"\n")]='\0';
countul(inputstring);
return 0;
}
