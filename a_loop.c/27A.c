#include<stdio.h>
#include<math.h>
int main()
{
   int N,i,s=0,x,k=1,A;
   printf("enter the value of N:");
   scanf("%d",&N);
   printf("enter the value of x:");
   scanf("%d",&x);
   for(int i=1;i<=N;i++)
   {
   	if(i%2==0)
   	{
   		A=pow(x,k);
   		s=s-A;
        }
        else
        {
        	A=pow(x,k);
        	s=s+A;
        }
        k=k+2;
   }
   	printf("%d\n",s);
   return 0;
}
  
