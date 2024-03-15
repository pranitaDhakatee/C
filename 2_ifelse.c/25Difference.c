#include<stdio.h>

int main()
{
   int a,b,D,S;
   scanf("%d %d",&a,&b);
   if (a>b)
   {
      D=a-b;  
      printf("%d\n",D);
   }
   else
   {
      S=a+b;
     printf("%d\n",S);
   }
   return 0;
}
