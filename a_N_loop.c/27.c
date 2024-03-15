#include<stdio.h>

int main()
{
   int N,i,j,k,a;
   printf("enter a number of N:");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
	   {
	   for(int j=1;j<=(N-i);j++)
		   {
		   	printf("  ");
		   }
		 	 if(i==1 || i==N)
		 	 {
		 	 for(int k=1;k<=i;k++)
		 	 {
		 	 	printf("* ");
		 	 }
	                  }
	                  else
	                  {
	                  int a=(2*i-3);
	                  printf("*"+"%d"*" "+"* ",a);
	                  }
	                  	   printf("\n");
	   }
   return 0;
}
     
    
