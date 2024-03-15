#include<stdio.h>

int main()
{
   int sp,cp,P,L;
   scanf("%d %d",&sp,&cp);
   if (sp>cp)
   {
     P=sp-cp;
     printf("P %d\n",P);
   }
   else if (cp>sp)
   {
     L=cp-sp;
     printf("L %d\n",L);
   }
   else (cp==sp);
   {
     printf("NO P No L");
   }
   return 0;
}   
