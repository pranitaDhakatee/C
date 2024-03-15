#include<stdio.h>

int main()
{
    int a,b,c,m,sm;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
     {
      m=a;
      sm=b;
    }
    else 
      {
      m=b;
      sm=a;
      }
    if (m>c)
    { 
       if (sm>c)
        {
     printf("%d",sm);
        }
      else
      {
      printf("%d",c);
      }
    }
      else 
      {
       printf("%d",m);
      }
      return 0;
}
