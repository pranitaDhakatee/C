#include<stdio.h>
#include<math.h>
int main()
{
 
  	int N;
  	printf("enter the value of N:");
   	scanf("%d",&N);
   	for(int i=1;i<=N;i++)
   	{
   		int c=0;
   		int j=i;
   		int R;
   		while(j>0)
   		{
   		R=j%10;
   		c++;
   		j=j/10;
   		}
   			int k=i;
   			int s=0;
   			int p,A;
   			while(k>0)
   			{
   				p=k%10;
   				A=pow(p,c);
   				s=s+A;
   				k=k/10;
   			}
   		if(s==i)
   		{
   		printf("arm %d\n",s);
   		}
   	}
   		return 0;
 }
   		
   		
   		
