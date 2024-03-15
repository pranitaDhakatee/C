#include<stdio.h>

int main()
{
   int i,s=0,c=0;
  // printf("enter the value of N:");
   //scanf("%d",&N);
   for(int i=2;s<1000;i=i+2)
   {
   	s=s+i;
   	c++;
   }
 	printf("Sum is : %d\nValue of Count of even number added: %d\n",s,c);
   
   return 0;
}
   
