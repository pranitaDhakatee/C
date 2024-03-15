#include<stdio.h>


int main() {
    int m;
    printf("enter of the number m:");
    scanf("%d",&m);
    int N;
    int x=1;
    printf("enter of the number N:");
    scanf("%d",&N);
    for (int i=1; i<=m; i++) {
       if (i%2==0) {
          for(int x=1;x<=N;x++)
	{
		for(int j=1;j<=N-x;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=5;k++)
		{
			printf("*");
		}
		printf("\n");
		}
       }
       else {
            
            for(int k=1;k<=N;k++)
	        {
		    for(int p=0;p<k;p++)
		{
			printf(" ");
		}
		for(int l=1;l<=5;l++)
		{
			printf("*");
		}
		printf("\n");
		}
      }
}
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
