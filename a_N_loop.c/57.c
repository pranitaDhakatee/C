#include<stdio.h>

int main()
{
   int N,i,j,s=2;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=N;i>0;i--)
	   {
	   for(int j=i;j<=N;j++)
		  {
		   	printf("%d ",j);
		 }
		   for(int m=N+1;m>=s;m--)
		   {
		   	printf("%d ",m);
		   }
	        //  printf("\n");
	   
	   	//int p=i;
	   	//for(int k=i-1;k>0;k--)
	   	//	{
	   	//			printf("%d ",k);
	   	//		}
	   	 printf("\n");
	   	 s=s+1;
	   }
	   		
   return 0;
}
     
    
