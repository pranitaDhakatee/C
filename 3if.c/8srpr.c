#include<stdio.h>

int main()
{	
	float A,B,C,D,I;
	scanf("%f %f %f %f %f",&A,&B,&C,&D,&I);
		if (A==B && B==C && C==D)
		{
			if (I==90)
			  printf("A square");
			else
			  printf("A rhombus");
	         }
			
			else if (A==C && B==D)
			     {
			      if (I==90)
			      printf("A rectangle");
			      else
			      printf("A parallelogram");
	                     }
	                else{
	                printf("A irregular quadrilateral");
	                     }
 return 0;
}
	        
