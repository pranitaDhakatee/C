#include<stdio.h>

int main()
{
 	int N;
 	int A;
 	printf("enter the value of N:");
 	scanf("%d",&N);
 	int s=0;
 	int p=1;
 	while(N>0)
 	{
 		A=N%10;
 		s=s+A*p;
 		p=p*2;
 		N=N/10;
 	}
 	printf("%d",s);
 	return 0;
}
