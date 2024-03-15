#include<stdio.h>

/*int main()
{
	int N,k=0;
	scanf("%d",&N);
	int arr[N];
	int c=0;
	for(int i=0;i<N*2;i++)
	{
		if(c%2==0)
		{
		 arr[k]=c;
		 k++;
	        c++;
		}
		c++;
	}
	for(int j=0;j<k;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}*/


int main() {
  int n;
  printf("enter of the element n:");
  scanf("%d",&n);
  int arr[n];
  int c=1;
  int k=0;
  for (int i=0; i<=(n*2); i++) {
     if (c%2!=0) {
        arr[k]=c;
        k++;
        c++;
     }
     else {
       c++;
     }
 }
 for (int i=0; i<=n; i++) {
     printf("%d\n",arr[i]);
}
return 0;
}

