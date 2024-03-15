#include<stdio.h>

int main()
{   
    int cp,sp,p,L;
    scanf("%d %d",&cp,&sp);
    if (cp>sp){
	p=cp-sp;
	L=(p*100)/cp;
	printf("%d",L);
    }
    else
    {
       printf("invalid");
    }
    return 0;
}

 
