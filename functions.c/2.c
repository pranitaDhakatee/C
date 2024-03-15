#include<stdio.h>
void england()
{
	printf("you are england\n");
	return;
}
void australia()
{
	printf("you are australia\n");
	england();
}
void india()
{
	printf("you are india\n");
	australia();
}
int main()
{
	india();
	return 0;
}

