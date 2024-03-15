#include<stdio.h>
int main()
{
    int a,b,c,d,e,T;
    float per;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    T=(a+b+c+d+e);
    per=T*100/500;
    printf("%f",per);
    return 0;
}
