#include<stdio.h>
#include<string.h>
int main()
{
	struct book
	{
	float price;
	int noOfPage;
	char name[50];
	}a,b,c;
	a.noOfPage=100;
	a.price=311.5;
	strcpy(a.name,"secret seven");
	
	b.noOfPage=200;
	b.price=400.5;
	strcpy(b.name,"comady book");
	 
	c.noOfPage=400;
	c.price=251.5;
	strcpy(c.name,"story book");
	
	printf("%d\n",a.noOfPage);
	printf("%f\n",a.price);
	printf("%s\n",a.name);
	return 0;
}
