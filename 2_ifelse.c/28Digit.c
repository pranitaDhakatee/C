#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    if (N>=0 && N<=9)
    {
       printf("one digit nu");
    }
    else if (N>=10 && N<=99)
    {
       printf("Two digit nu");
    }
    else if (N>=100 && N<=999)
    {
       printf("Three digit nu");
    }
    else if (N<=10000000000)
    {
       printf("More digit nu");
    }
    else
    {
       printf("invalide");
    }
    return 0;
}
