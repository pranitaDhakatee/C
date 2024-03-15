#include<stdio.h>
int square(int num)
{
return num * num;
}
int sumOfsquare(int a,int b)
{
int squareA=square(a);
int squareB=square(b);
return squareA+squareB;
}
int main()
{
int num1,num2;
printf("enter of two num:");
scanf("%d %d",&num1,&num2);
int result=sumOfsquare(num1,num2);
printf("sum of squares:%d\n",result);
return 0;
}
