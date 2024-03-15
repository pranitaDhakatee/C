#include<stdio.h>
#include<math.h>
int main()
{
   int N,i,s=0,a=2,A;
   printf("enter the value of N:");
   scanf("%d",&N);
  // printf("enter the value of x:");
   //scanf("%d",&x);
   for(int i=1;i<=N;i++)
   {
   	if(i%2==0)
   	{
   		A=pow(a,a);
   		s=s-A;
        }
        else
        {
        	A=pow(a,a);
        	s=s+A;
        }
        a=a+1;
   }
   	printf("%d\n",s+1);
   return 0;
}
  
