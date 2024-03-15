#include <stdio.h>
#include <math.h>
   
int main()
{ 
    int p,n,T;
    float l,x,y;
    scanf("%d %f %d",&p,&l,&n);
    x=(1+l/100);
    y=pow(x,n);
    T=p*y;
    printf("%d",T);
    return 0; 
}
