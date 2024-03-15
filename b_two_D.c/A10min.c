#include<stdio.h>
#include<limits.h>
int main()
{       
        int row,coloumn;
        printf("enter of the r:");
        scanf("%d",&row);
        printf("enter of the c:");
        scanf("%d",&coloumn);
	int matrix1[row];
	int matrix2[coloumn];
	int min = INT_MAX;
	int matrix[row][coloumn];
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<coloumn;j++)
	{
	  scanf("%d",&matrix[i][j]);
	if(matrix[i][j]<min)
	{
	min=matrix[i][j];
	}
	}
	}
	printf("Minimum element is = %d\n",min);
}

	
