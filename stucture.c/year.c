#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){

	typedef struct date{
	int date;
	int month;
	int year;
	}date;
	date a,b;
	a.date=29;
	a.month=1;
	a.year=2005;
	
	b.date=17;
	b.month=12;
	b.year=2003;
	
	bool flag=true;
	if(a.date!=b.date) flag=false;
	if(a.month!=b.month) flag=false;
	if(a.year!=b.year) flag=false;
	
	if(flag==true) printf("the date are same");
	else printf("the dates are different");
	return 0;
	}
	
