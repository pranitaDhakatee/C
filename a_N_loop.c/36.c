#include<stdio.h>

int main()
{
   int N,a=1;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
	   {
	   	if(i%2!=0)
	   	{	  
	  		 for(int j=1;j<=N;j++)
		 		  {
		   			printf("%d ",a);
		   			a=a+1;
		   	          }
		   	          printf("\n");
		  }

	   
	   
	     else
	     {
	     a=i*N;
	              for(int k=1;k<=N;k++)
	 	             {
	 	  		printf("%d ",a);
		   		a=a-1;
	          	     }   
	          printf("\n");
	          a=a+(N+1);
	     }
	   }
	   
   return 0;
}
     
    
