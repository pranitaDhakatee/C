#include<stdio.h>
#include<math.h>
int main()
{
	int N,s=0,Rs=0,p,a,R,Rev,sq;
	printf("enter of the number N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		int a;
		printf("enter of the number a:");
	        scanf("%d",&a);
	        sq=a*a;
	        s=s+sq;
	        R=0;
	        Rev=0;
	        while(a>0)
	        {
	        	R=a%10;
	        	Rev=Rev*10+R;
	        	a=a/10;
	        }
	        //printf("%d   \n",Rev);
	          p=pow(Rev,2);
	          //printf("%d\n",p);
		  Rs=Rs+p;
	}
	if(s==Rs)
	{
		printf("%d",s);
	}
	else
	{
		printf("invalid");
	}
	printf("\n");
	
	return 0;
}
