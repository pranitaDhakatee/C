#include<stdio.h>
#include<string.h>
int main() {
    char n[100];
    int k[100];
    char romanNum[7]={'M','D','C','L','X','V','I'};
    int decimal[7]={1000,500,100,50,10,5,1};
    int s=0,m=0;
    printf("enter of the number n:");
    scanf("%s",n);
    int length=strlen(n);
   for(int i=0;i<length;i++)
   {
   	for(int j=0;j<7;j++)
   	{
   		if(romanNum[j]==n[i])
   		{
   			k[m]=decimal[j];
   			m++;
   		}
   	}
   }
   for(int l=0;l<m;l++)
   {
   	printf("%d\n",k[l]);
   }
   			
   int sum=0;
   for(int h=0;h<m;h++)
   {
   	if(k[h]>=k[h+1])
   	{
   		sum=sum+k[h];
   	}
   	else
   	{
   		sum=sum-k[h];
   	}
   }
  printf("%d",sum);
   
  return 0;
}


