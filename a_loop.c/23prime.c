#include<stdio.h>

int main()
{
   int N,i,s=0;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=2;i<N;i=i+1)
   {
       if(N%i==0)
       s++;
   }
   if(s==0){
   		printf("prime no\n");
   	}
   	else
   	{
   	       printf("not prime no");
   	 }
   return 0;
}
  
