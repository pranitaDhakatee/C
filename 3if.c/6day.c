#include<stdio.h>

int main()
{	
	int A,charge;
	scanf("%d",&A);
		if (A<=5)
		{
	          charge=10+(A-5)*2;
	          printf("%d",charge);
			}
			   else if (A<=10)
				{ 
				   charge=15+(A-10)*3;
	                           printf("%d",charge); 
				}	
		                 else if(A<=15)
		                 {
		                    charge=10+(A-5)*4;
	                            printf("%d",charge);
	                         }
		                    else if  (A>15)
					{
		     			 charge=25+(A-15)*5;
	              			 printf("%d",charge);
	       			        }
	       		
		
		
	        
	        return 0;
}
	        
