#include<stdio.h>

int main()
{	
	int Rh,Ts;
	float cc;
	scanf("%d %f %d",&Rh,&cc,&Ts);
		if ((Rh>50) && (cc>0.7) && (Ts>5600))
		{
			printf("Grade is 10");
	        }
	        else if (Rh>50 && cc>0.7)
	        {
	        printf("Grade is 9");
	        }
	        else if (cc>0.7 && Ts>5600)
	        {
	        printf("Grade is 8");
	        }
	        else if (Rh>50 && Ts >5600)
	        {
	        printf("Grade is 7");
	        }
	        else
	        {
	        printf("Grade is 6");
	        }
	        
	        return 0;
}
	        
