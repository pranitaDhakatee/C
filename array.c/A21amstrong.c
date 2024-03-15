#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int a;
	int p;
	int r;
	int k;
	int arm;
	int c,t=0;
	printf("enter of the number n:");
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		p=i;
		a=i;
	        arm=0;
		c=0;
		while (p>0)
		{
			
			c++;
			p=p/10;
		}
		int k;
	         while(a>0)
		{	
			r=a%10;
			k=pow(r,c);
			arm=arm+k;
			a=a/10;
		}
		
		 if (i==arm)
		{
		printf("%d\n",arm);
		arr[t]=i;
		t++;
	        }
	 }
	return 0;
}
