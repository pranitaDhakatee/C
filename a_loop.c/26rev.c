/*#include<stdio.h>

int main()
{
   int N;
   int a;
   printf("enter the value of N:");
   scanf("%d",&N);
   int s=0;
   while (N>0)
   	{
   		r=N%10;
   		s=s*10+r;
   		N=N/10;
       }
   	       printf("%d",s);
     return 0;
}*/
 #include<stdio.h>
 int main()
 {
 	int N;
 	scanf("%d",&N);
 	int rev=0;
 	while (N>0)
 	{
 		int r=N%10;
 		rev=rev*10+r;
 		N=N/10;
 	}
 	printf("%d",rev);
 }
