#include<stdio.h>

int main()
{
  int N,i,s=0,k=0;
  printf("enter a number of N:");
  scanf("%d",&N);
  for(int i=1;i<=N;i++)
  {
    if(i%2==0)
    {
    printf("even=%d\n",i);
    }
    else
    printf("odd=%d",i);
    }
    return 0;
}
    
