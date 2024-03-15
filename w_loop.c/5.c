#include<stdio.h>

int main()
{
	int m;
	int n;
	printf("enter of number tn number m:");
	scanf("%d",&m);
	printf("enter of number tn number n:");
	scanf("%d",&n);
	int i=m;
	while(i<n)
	{
		int j=1;
		int c=0;
		while(j<=i)
		{
			if(i%j==0)
			c++;
		j++;
		}
		  if(c==2)
 		  {
 		  
   			printf("%d",i);
   			printf("\n");
   		  }
		
	i++;
	 }

	
	
return 0;
}
