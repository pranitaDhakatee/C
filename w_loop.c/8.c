#include<stdio.h>

int main()
{
	int n;
	printf("enter of the number N:");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
	int j=1,s=0;
	while(j<=i)
	{
		 if(i%j==0)
		{
			s=s+1;
		    	//j++;
		}
		j++;
		
	}
	
		   if(s==2)
 		  {
 		  
   			printf("%d",i);
   			printf("\n");
   		  }
		
	i++;
	}
	 

	
	
return 0;
}
