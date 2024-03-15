#include<stdio.h>

int main()
{	
	int A,B,C,sum;
	scanf("%d%d%d",&A,&B,&C);
	sum=A+B+C;
		if (sum!=180)
		{
			printf("Tringle is not possible");
	        }
	        else if (A==B && B==C && C==A)
	        {
	        printf("Equiangular");
	        }
	        else if (A==90 || B==90 || C==90)
	        {
	        printf("R-A-T");
	        }
	        else if (A>90 || B>90 || C>90)
	        {
	        printf("O-A-T");
	        }
	        else if (A<90 && B<90 && C<90)
	        { 
	        printf("A-AT");
	        }
	        
	        return 0;
}
	        
