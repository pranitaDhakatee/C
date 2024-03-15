#include <stdio.h>

int main()
{
	int m,n;
	printf("enter of the number m:");
	scanf("%d",&m);
	int a[m];
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter of the number n:");
	scanf("%d",&n);
	int b[n];
	
		for(int i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		int c[m+n];		
	      	int k=0;
	      	int i=0,j=0;
	      	
	      	//find unioun array
	      	while(i<m && j<n)
	      	{
	      	     if(a[i]<b[j])
	      	     {
	      	     	c[k]=a[i];
	      	     	k++;
	      	     	i++;
	      	     }
		    else if (a[i]>b[j])
		    {
		    c[k]=b[j];
		    k++;
		    j++;
		    }
		    else
		    {
		    c[k]=a[i];
		    k++;
		    i++;
		    j++;
		    }
		   }
	while(i<m)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<n)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	for(int i=0;i<k;i++)
	{
	 	printf("%d",c[i]);
	}
	printf("\n");
	return 0;
}
	
