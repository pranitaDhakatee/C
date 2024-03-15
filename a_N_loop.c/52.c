#include<stdio.h>

int main()
{
   int N,i,j,s=1;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=N;i>0;i--)
	   {
	   for(int j=1;j<i;j++)
		  {
		   	printf("* ");
		 }
		   for(int m=1;m<=s;m++)
		   {
		   	printf("0 ");
		   }
	        //  printf("\n");
	   
	   	int p=1;
	   	for(int k=1;k<p;k++)
	   		{
	   				printf("* ");
	   			}
	   	 printf("\n");
	   	 s=s+2;
	   }
	   		
   return 0;
}
     
    
