#include<stdio.h>

int main()
{
   int N,i,j;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=N;i>0;i--)
	   {
	   for(int j=1;j<=i;j++)
	   {
		   	printf("%d",j);
		    }
	        
	   printf("\n");
	   }
   return 0;
}
     
    
