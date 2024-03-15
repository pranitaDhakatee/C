#include<stdio.h>

int main()
{
    int A,P,l,b;
    scanf("%d %d",&l,&b);
    A=l*b;
    P=2*(l+b);
    printf("%d %d",A,P);
    if (A==P)
    {
       printf("Both are equal");
    }
    else if (A>P)
    {
       printf("A is greater");
    }
    else
    {
       printf("P is greater");
    }
    return 0;
}
