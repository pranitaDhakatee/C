/*#include<stdio.h>
void swap(int* x,int* y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
return ;
}
int main()
{
int a=2;
int b=9;
swap(&a,&b);
printf("the value of a is %d\n",a);
printf("the value of a is %d\n",b);
return 0;
}*/
function swap(x, y) {
  let temp = x;
  x = y;
  y = temp;
}

let a = 2;
let b = 9;
swap(a, b);
console.log("the value of a is " + a);
console.log("the value of b is " + b);

