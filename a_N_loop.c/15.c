#include<stdio.h>

int main()
{
   int N,i,j;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
	   {
	   for(int j=1;j<=i;j++)
		   {
		   	printf("%d",i);
		   }
	   
	   printf("\n");
	   }
   return 0;
}
     
    
