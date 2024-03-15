#include<stdio.h>

int main()
{	
	float A,B,C,sum;
	scanf("%f%f%f",&A,&B,&C);
	
		if (A+B>C && A+C>B && B+C>A)
		{
		   if (A==B && B==C && C==A)
		{
			printf("Triangle is equilateral");
	        }
	            else if (A==B || B==C || A==C)
	        {
	              printf("Triangle is isosceles");
	        }
	           else   {
	                  printf("scalene");
	                  
	                  }
	         }
	           else if (A==90 || B==90 || C==90)
	                 {
	                   printf("R-A-T");
	                   }
	         
	              
	             
	       
	        
	        return 0;
}
	        
