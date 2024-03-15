#include<stdio.h>

int main()
{
   int N,i,j,k,l,p,m;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
	   {
	   for(int j=1;j<=(N-i);j++)
		   {
		   	printf(" ");
		   }
		 	  for(int k=1;k<=i;k++)
		   	{
		   		printf("* ");
		   	}
	   
	   printf("\n");
	   }
	   for(int l=N-1;l>0;l--)
	 	  {
	               for(int m=1;m<=(N-l);m++)
		             {
		   		printf(" ");
		  	     }
		 	 	 for(int p=1;p<=l;p++)
		   	     {
		   		printf("* ");
		   	     }
	           
	          printf("\n");
	         }
	   
	   
   return 0;
}
     
    
