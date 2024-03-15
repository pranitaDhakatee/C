#include<stdio.h>
#include<stdbool.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};//{12,23,3,4,23,}but i found last 23 i=6;i>=0;i--
	int x=4;
	int idx=-1;
	bool flag=false;
	for(int i=0;i<=6;i++)
	{
		if(arr[i]==x)
	      {
		flag=true;
		idx=i;
		break;
	      }
	}
	if(flag==false)
	{
		printf("%d is not present in array",x);
	}
	else
	{
		printf("%d present in array and index %d",x,idx);
	}
	return 0;
}
