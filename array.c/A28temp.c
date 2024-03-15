#include<stdio.h>

int main()
{
	int n,i,hd,cd;
	float maxt[31],mint[31];
	float summax=0,summin=0;
	float mMaxT,mMinT;
	float highT=-1000,lowT=1000;
	printf("enter of the number n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("maxt%d\n",i);
	scanf("%f",&maxt[i]);
	summax=summax+maxt[i];
	if(maxt[i]>highT)
	{
	highT=maxt[i];
	hd=i;
	}
	printf("mint%d\n",i);
	scanf("%f",&mint[i]);
	summin=summin+mint[i];
	if(mint[i]<lowT)
	{
	lowT=mint[i];
	cd=i;
	}
	}
	mMaxT=summax/n;
	mMinT=summin/n;
	
	printf("mMaxT:%f\n",mMaxT);
	printf("mMinT:%f\n",mMinT);
	printf("highT:%f\n",highT);
	printf("lowT:%f\n",lowT);
	printf("hd:%d\n",hd);
	printf("cd:%d\n",cd);
	return 0;
}
