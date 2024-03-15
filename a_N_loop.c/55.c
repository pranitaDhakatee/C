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
		   	printf("0 ");
		 }
		   for(int m=1;m<=s;m++)
		   {
		   	printf("1 ");
		   }
	        //  printf("\n");
	   
	   	int p=i;
	   	for(int k=1;k<p;k++)
	   		{
	   				printf("0 ");
	   			}
	   	 printf("\n");
	   	 s=s+2;
	   }
	   		
   return 0;
}
     
    
