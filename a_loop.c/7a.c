#include<stdio.h>

int main()
{
   int N,c=0,s=0;
   printf("enter the value of N:");
   scanf("%d",&N);
   // printf("enter the value of u:");
   //scanf("%d",&u);
   for(int i=1;c<=N;i=i+1)
   {
   	if(i%3==0);
   	{
   		s=s+i*i;
   		c=c+1;
   	}
   }
   	printf("%d\n",s);
   return 0;
}
   
