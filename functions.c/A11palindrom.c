#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
bool isPalindrom(const char *str)
{
int len =strlen(str);
int i=0;
int j=len-1;
while(i<j)
{
while(i<len && !isalnum(str[i]))
i++;
while(j>=0 &&!isalnum(str[j]))
j--;
if(i>=j)
break;
char left=tolower(str[i]);
char right=tolower(str[j]);
if(left!=right)
return false;
i++;
j--;
}
return true;
}

int main()
{
char input[100];
printf("enter a string:");
fgets(input,sizeof(input),stdin);

input[strcspn(input,"\n")]='\0';

if(isPalindrom(input)){
printf("It is palindrom\n");
}
else
{
printf("It is not palindrom\n");
}
return 0;
}


