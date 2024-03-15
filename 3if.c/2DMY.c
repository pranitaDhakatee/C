#include <stdio.h>

int main()
{
	int k,m,y,d ;
	printf("year");
	scanf("%d",&y);
	printf("date");
	scanf("%d",&k);
	printf("month");
	scanf("%d",&m);
	
	if (y>0)
	{
		if (m>0 && m<=12)
		{
			if(m==1 || m==3 || m==5 || m==7 || 	
			m==8 || m==10 || m==12)	
			{	
				d=31;			
				printf("%d",d);
	        	}
	        	else if (m==2)
	        	{	
	        		d = (28,29); 
	        		printf("%d",d);
	                }
	                else {
	                	d=30;
	                      printf("%d",d);
	                }
	        }
	        else {
	        	printf("invalid number");
	        }
	}
	else {
		printf("invalid date ");
	}
	if (k>0 && k<=31)
	{
		printf("date is valid");
	}
	else {
		printf("invalid date");
	     }
	
	return 0;
}
	        
