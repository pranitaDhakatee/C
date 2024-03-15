#include<stdio.h>
int main()
{
	struct girl{
	int beuty;
	int happy;
	int sad;
	char tier;//A,S,M,P,D
	};
	struct girl pranu;
	printf("enter beuty of pranu:");
	scanf("%d",&pranu.beuty);
	//pranu.beuty=99;
	pranu.happy=50;
	pranu.sad=100;
	pranu.tier='A';
	
	struct girl sanu;
	sanu.beuty=89;
	sanu.happy=101;
	sanu.sad=78;
	sanu.tier='B';
	
	struct girl ranu;
	ranu.beuty=76;
	ranu.happy=67;
	ranu.sad=55;
	ranu.tier='M';
	
	printf("%c\n",pranu.tier);
	return 0;
}
