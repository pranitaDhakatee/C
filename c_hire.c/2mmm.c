#include<stdio.h>

int main()
{
	int n,s=0,temp,mean,median,mode;
	printf("enter of the number n:");
	scanf("%d",&n);
	int l[n];
	int m[100]={0};
	for(int i=0;i<n;i++)
	{
	int a;
	printf("enter of the number a:");
	scanf("%d",&a);
	l[i]=a;
	s=s+l[i];
	}
	 mean=s/n;
	printf("mean:%d\n",mean);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(l[j]<l[i])
			{
				temp=l[j];
				l[j]=l[i];
				l[i]=temp;
			}
	       }
	}
		//cal to median
		int mid=n/2;
			if(n%2==0)
			{
			median=(l[mid-1]+l[mid])/2;
			}
			else
			{
			 median=l[mid];
			}
			printf("median:%d\n",median);
			//cal the mode
		        int max=0;
			for(int i=0;i<n;i++)
			{
			m[l[i]]++;
			if(m[l[i]]>max);
			{
			max=m[l[i]];
			mode=l[i];
			}
			}
			printf("mode:%d\n",mode);
	return 0;
}
	
	
