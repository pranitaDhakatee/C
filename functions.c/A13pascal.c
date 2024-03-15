#include<stdio.h>
int PascalValue(int i,int j)
{
if(j==0 || j==i)
{
return 1;
}
else
{
return PascalValue(i-1,j-1)+PascalValue(i-1,j);
}
}
void printPascalTriangle(int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<=i;j++)
{
printf("%d",PascalValue(i,j));
}
printf("\n");
}
}
int main()
{
int n;
printf("enter of n");
scanf("%d",&n);
printPascalTriangle(n);
return 0;
}
