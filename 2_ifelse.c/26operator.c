/*include<stdio.h>

int main()
{
   int a,b;
   char o;
   scanf("%c %d %d",&o,&a,&b);
   if (o == '+')
   { 
      printf("%d\n",a + b);
   }
   else if (o == '-')
   { 
     printf("%d\n",a - b);
   }
   else if (o == '*')
   {
     printf("%d\n",a * b);
   }
   else if (o == '/')
   {
     printf("%d\n",a / b);
   }
   else
   {
     printf("invalid");
   }
   return 0;
}*/



#include<stdio.h>

int main()
{
   int a, b;
   char o;
   scanf(" %c %d %d", &o, &a, &b); // Add a space before %c

   if (o == '+')
   { 
      printf("%d\n", a + b);
   }
   else if (o == '-')
   { 
     printf("%d\n", a - b);
   }
   else if (o == '*')
   {
     printf("%d\n", a * b);
   }
   else if (o == '/')
   {
     if (b != 0)
     {
        printf("%d\n", a / b);
     }
     else
     {
        printf("Division by zero is not allowed\n");
     }
   }
   else
   {
     printf("Invalid operator\n");
   }
   return 0;
}

