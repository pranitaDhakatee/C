#include<stdio.h>


int main() {
  int n;
  printf("enter of the element n:");
  scanf("%d",&n);
  int arr[n];
  int c=0;
  int k=0;
 for (int i=0; i<=n; i++)
   {	c=0;
  	for(int j=1;j<i;j++)
  	{
          if (i%j==0)
          {
      	  c++;
          }
       }   
        if(c==1)
       {
      	  arr[k]=i;
       	  k++;
      }
       //  c=0;
  }
 for (int i=0; i<k; i++) {
     printf("%d\n",arr[i]);
}
return 0;
}
	
