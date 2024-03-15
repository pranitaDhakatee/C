#include<stdio.h>

int main()
{
   int a,b,c;
   float p; 
   printf("enter a :");
   scanf("%d",&a);
   printf("enter b :");
   scanf("%d",&b);
   p=(a/b)*100;
   printf("%f\n",p);
   if (p>=75)
   {
      printf("stu_is_allow_to_sit.\n");
   }
   else
   {
     printf("stu_is_not_allow_to_sit.\n");
   }
   return 0;
}
