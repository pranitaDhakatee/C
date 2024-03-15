#include<stdio.h>
#include<math.h>
int main()
{
	int N,s1,s2,p,m;
	printf("enter of the number N:");
	scanf("%d",&N);
	for(int i=-2;i<=N;i++)
	{
		s1=0;
		s2=0;
		for(int j=1;j<i+3;j++)
		{
			p=pow(j,2);
			s1=s1+p;
		}
		{
			int j;
			for(int z=j;z<j+2;z++)
			m=pow(j,2);
			s2=s2+m;
			}
			if(s1==s2)
			{
				for(int x=i;x<i+5;x++)
				{
					printf("%d ",x);
				}
				printf("\n");
			}
	
	}
return 0;
}
