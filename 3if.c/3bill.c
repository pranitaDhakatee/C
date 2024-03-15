#include<stdio.h>

int main()
{
    int A,total,surcharge;
    scanf("%d",&A);
    float bill;
    	if (A<=50)
    	{
    	bill=A*0.50;
    	surcharge=bill*0.20;
    	total=bill+surcharge;
    	printf("%d",total);
    	}
    		else if (A<=150)
    		{
    		bill=50*0.50+(A-50)*0.75;
    		surcharge=bill*0.20;
    	        total=bill+surcharge;
    	        printf("%d",total);
    		}
    		else if (A<=250)
    		{
    		bill=50*0.50+100*0.75+(A-150)*1.20;
    		surcharge=bill*0.20;
    	        total=bill+surcharge;
    	        printf("%d",total);
    		}
    		else
    		{
    		bill=50*0.50+100*0.75+100*1.20+(A-250)*1.50;
    		surcharge=bill*0.20;
    	        total=bill+surcharge;
    	        printf("%d",total);
    		}
    	return 0;
}    	
