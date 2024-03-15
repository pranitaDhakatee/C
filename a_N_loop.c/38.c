#include<stdio.h>

int main()
{
   int N;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
	   for(int j=1;j<=N;j++)
	   {
	   	if(j<=N-i)
		   {
		   	printf("  ");
		   }
		   else
		   {
		  	 if(j%2==0)
		  	{
		  		printf("1 ");
		  	}
		 	 else
		 	{
		 	 printf("0 ");
		  	}
		   }
	  }
	  printf("\n");
  }
  return 0;
}  
	 
