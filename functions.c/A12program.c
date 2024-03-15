#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
bool isProgram(const char *str)
{
bool alphabetPresent[26]={false};
for(int i=0;str[i]!='\0';i++)
{
char c=tolower(str[i]);
if('a' <=c && c<='z')
{
alphabetPresent[c-'a']=true;
}
}
for(int i=0;i<26;i++)
{
if(!alphabetPresent[i])
{
return false;
}
}
return true;
}
int main()
{
const char *sentence="The quick brown fox jumps over the lazy dog";
if(isProgram(sentence))
{
printf("The sentence is program.\n");
}
else
{
printf("The sentence is not program.\n");
}
return 0;
}
