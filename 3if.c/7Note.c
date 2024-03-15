#include<stdio.h>

int main()
{	
	int A,Note;
	scanf("%d",&A);
		if (A>=1000)
		   {
			Note=A/1000;
			Note=A%1000;
			printf("%d",Note);
			//else
			//{
			//Note=A%1000;
			//}
		  }
		else if (A>=500)
		{
			Note=A/500;
			Note=A%500;
			printf("%d",Note);
			//else
			//{
			//Note=A%500;
			//}
		}
	        else if (A>=100)
	        {
			Note=A/100;
			Note=A%100;
			printf("%d",Note);
			//Note=A%100;
			//else
			//{
			//Note=A%100;
			//}
		}
	        else if (A>=20)
	        {
			Note=A/20;
			Note=A%20;
			printf("%d",Note);
			//else
			//{
			
			//}
		}
	        else if (A>=10)
	        {
			Note=A/10;
			Note=A%10;
			printf("%d",Note);
			//else
			//{
			//Note=A%10;
			//}
		}
	        else if (A>=5)
	        {
	        	Note=A/5;
	        	Note=A%5;
			printf("%d",Note);
			//else
			//{
			//Note=A%5;
			//}
		}
		else if (A>=2)
		{ 
			Note=A/2;
			Note=A%2;
			printf("%d",Note);}
			//else
			//{
			//Note=A%2;
			//}
		else if (A>=1)
		{
			Note=A/1;
			Note=A%1;
			printf("%d",Note);
			//else
			//{
			//Note=A%1;
			//}
		}
	        return 0;
}
	        
