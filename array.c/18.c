#include<stdio.h>

int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int e=0;
	int o=0;
	for(int i=0;i<=6;i++)
	{
		if(i%2==0)
		{
			e=e+arr[i];
		}
		else
		{
			o=o+arr[i];
		}
	}	
		
		printf("%d\n",e-o);
		
	
	return 0;
}
	
