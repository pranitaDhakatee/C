#include<stdio.h>

int main()
{
	int n;
	printf("enter of the number N:");
	scanf("%d",&n);
	int k=n;
	int s=0;
	int p=1,r;
	while(n>0)
	{
	  r=n%10;
          if(k%2==0)
          {
	    s=s+r;
	  }
	  else {
	    p=(p*r);
	  }
	  n=n/10;
	}
     printf("%d %d",s,p);
      printf("\n");
   		  
	 

	
	
return 0;
}
