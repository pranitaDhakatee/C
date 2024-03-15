#include<stdio.h>

int main()
{
    int D,N;
    scanf("%d",&N);
    D=N%10;
    if (D%3==0)
    {
       printf("Last digit divisible by 3");
    }
    else
    {
       printf("Last digit not divisible by 3");
    }
   return 0;
}   
