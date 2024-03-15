#include<stdio.h>

int main()
{
	int n,hcf,r;
	printf("enter of the number N:");
	scanf("%d",&n);
	printf("enter of the number hcf:");
	scanf("%d",&hcf);
	int i=1;
	while(i<n)
	{
	  int a;
	  scanf("%d",&a);
	  
		 while(a>0)
		{
			r=hcf%a;
			hcf=a;
			a=r;
		}
	i++;
		
	}
      printf("hcf is = %d",hcf);
   	printf("\n");
   		  
	 

	
	
return 0;
}

