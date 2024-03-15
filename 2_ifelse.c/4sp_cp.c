#include<stdio.h>

int main()
{   
    int sp,cp,p,M;
    scanf("%d %d",&sp,&cp);
    if (sp>cp){
	p=sp-cp;
	M=(p*100)/cp;
	printf("%d",M);
    }
    else
    {
       printf("invalid");
    }
    return 0;
}
