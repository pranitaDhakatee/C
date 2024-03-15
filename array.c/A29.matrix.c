#include<stdio.h>
#define MAX_SIZE 10
int main(){

/* int Matrix[MAX_SIZE][MAX_SIZE];
int a[MAX_SIZE][MAX_SIZE];
int b[MAX_SIZE][MAX_SIZE];
int c[MAX_SIZE][MAX_SIZE];
*/
int rows;
int cols;
{
	printf("enter of the number row:");
	scanf("%d",&rows);
	printf("enter of the number cols:");
	scanf("%d",&cols);
	int i,j;
	int a[rows][cols];
	int b[rows][cols];
	int c[rows][cols];
	int s[rows][cols];
	//matrix a
	for(i=0;i<rows;i++)
	{
	
		for( j=0;j<cols;j++)
		{
		scanf("%d",&a[i][j]);
		//c[i][j]=a[i][j]+b[i][j];
		}
	}

	//matrix b;
	int k,l;
	for(k=0;k<rows;k++)
	{
		for(l=0;l<cols;l++)
		{
		scanf("%d",&b[k][l]);
		//c[k][l]=a[k][l]-b[k][l];
		}
	}
	//matrix add
	for(int m=0;m<rows;m++)
	{
		for(int n=0;n<cols;n++)
		{
		c[m][n]=a[m][n]+b[m][n];
		printf("%d\t",c[m][n]);
		}
		printf("\n");
	}
	
	for(int m=0;m<rows;m++)
	{
		for(int n=0;n<cols;n++)
		{
			s[m][n]=a[m][n]-b[m][n];
			printf("%d\t",s[m][n]);
		}
		printf("\n");
	}
	
	return 0;
	}
}

   
