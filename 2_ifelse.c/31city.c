#include<stdio.h>
#include<string.h>
int main()
{
    char city[30];
    scanf("%s", city);
    if (strcmp(city,"Delhi")==0)
    {
       printf("Red fort");
    }
    else if (strcmp(city,"Agra")==0)
    {
       printf("Taj mahal");
    }
    else if (strcmp(city, "jaipar")==0)
    
    {
       printf("Jal mahal");
    }
    else
    {
      printf("invalid city");
    }
   return 0;
}   
