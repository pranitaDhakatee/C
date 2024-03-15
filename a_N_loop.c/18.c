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
		   	printf("%d",i);
		    }
	        
	   printf("\n");
	   k=k++;
	   }
   return 0;
}
     
    
