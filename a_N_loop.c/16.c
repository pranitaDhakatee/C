#include<stdio.h>

int main()
{
   int N,i,j,k;
   printf("enter a number of N:");
   scanf("%d",&N);
   k=1;
   for(i=N;i>0;i--)
	   {
	   for(int j=1;j<=i;j++)
		   {
		   	printf("%d",k);
		   }
	   
	   printf("\n");
	   k=k+1;
	   }
   return 0;
}
     
    
