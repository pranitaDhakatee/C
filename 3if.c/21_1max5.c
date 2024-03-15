#include<stdio.h>

int main()
{
    int a,b,c,d,e,m1,m2,R;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if (a>b)
     {
      m1=a;
     }
    else 
    {
      m1=b;
    }
    if (c>d)
    {
      m2=c;
    }
    else 
    {
      m2=d;
    }
    if (m1>m2)
    {
      R=m1;
    }
    else 
    {
      R=m2;
    }
    if (R>e)
    {
     printf("%d",R);
    }
      else
      {
      printf("%d",e);
      }
      
      return 0;
}
