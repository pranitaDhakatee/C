#include<stdio.h>

int main()
{
 
        int i;
        scanf("%d",&i);
        int n;
        scanf("%d",&n);
        int arr [n];
        for (int j=0; j<n; j++)
        {
         scanf("%d",&arr[j]);
        }
	for(int a=n-1; a>=0; a--)
	{
	    if (arr[a]==i)
	    {
	    printf("%d",arr[a]);
		}
		
	
	}
	/*int a;
	printf("enter of the num a:");
	scanf("%d",&a);	
	if(arr[p]==a)
	{
		printf("%d\n",arr[a]);
	}*/
	
	return 0;
}	

