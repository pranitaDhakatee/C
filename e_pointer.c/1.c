#include<stdio.h>
int main()
{
int a=5;
int* x=&a;
*x=7;
printf("%d\n",a);
return 0;
}
