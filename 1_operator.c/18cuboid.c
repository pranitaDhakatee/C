#include<stdio.h>
int main()
{
    int l,b,h,LS,TS;
    scanf("%d %d %d",&l,&b,&h);
    LS=2*(l+b)*h;
    TS=2*((l*b)+(b*h)+(h*l));
    printf("%d %d\n",LS,TS);
    return 0;
}
