#include<stdio.h>

int main()
{
   int N,i;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
   	if(i%7==0 && i%5==0)
   	{
   	    printf("%d\n",i);
   	 }
   }
   
   return 0;
}
   
