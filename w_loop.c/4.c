#include<stdio.h>

int main()
{
   int N;
   int s=0;
   int i=2,j;
   while (i<100)
   {
   
   	 j=1;
   	 s=0;
   	while (j<i)
   	{
   		if(i%j==0);
   		{
   			s=s+j;
   		}
   	j++;
   	}	
   	//printf("%d\n",s);
   
  	 if(s==i)
   	{
   		printf("perfect %d\n",s);
  	 }
   i++;
   }
   return 0;
}
  
