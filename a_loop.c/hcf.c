#include<stdio.h>

int main()
{
   int A,B,p,R,hcf,lcm;
   printf("enter the value of A:");
   scanf("%d",&A);
   printf("enter the value of B:");
   scanf("%d",&B);
   p=A*B;
   R=A%B;
   while(R>0)
   {
   	A=B;
   	B=R;
   	R=A%B;
   }
  
   	hcf=B;
   	lcm=p/hcf;
  	printf("%d %d\n",hcf,lcm);
  
   	
   
   return 0;
}
   
