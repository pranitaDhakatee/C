#include<stdio.h>

int main()
{
  int CW,ES,Total;
  scanf("%d %d",&CW,&ES);
  if (CW>=20 && ES>=20)
  {
    Total=CW+ES;
     if (Total>=45)
     { 
       printf("pass");
     }
     else if(Total>=44)
     {
       printf("Grade is moderate");
     }
     else
     {
       printf("faild");
     }
   }
   return 0;
}
