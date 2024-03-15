#include<stdio.h>

int main()
{
   int N,i,j;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
	   {
	   for(int j=i;j<=N;j++)
		   {
		   	printf("%d",j);
		   }
	   
	   printf("\n");
	   }
   return 0;
}
     
    
