#include<stdio.h>

int main()
{
	int N,c=20,cb=10,R,TR;
	int cp=5,cbp=2;
	for(int i=1;i<=c;i++)
	{
		
		for(int j=1;j<=cb;j++)
		{
			R=(cp*i)+(cbp*j);
			TR=TR+R;
		}
	}
	printf("%d",TR);
	printf("\n");
return 0;
}
	
	
