#include<stdio.h>
int main()
{
        int N,a=1,b=a+1,c=b+1,f=0,s;
	printf("enter of the number N:");
	scanf("%d",&N);
	while (a<=N-2){
	b=a+1;
		while (b<=N-1){
		c=b+1;
			while (c<=N){
				int k=c*c;
				
				 s=(a*a)+(b*b);
			          if(k==s)
			                {
				         printf("%d %d %d \n",c,a,b);
			                }
			          else
			                {
				         c=c++;
			               }
			  b++;
			  c=b+1;
			 }
		
		}
		a++;
	}
	//printf("%d ",f);
	//printf("\n");
	
	return 0;
}
