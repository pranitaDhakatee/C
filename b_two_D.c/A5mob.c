#include<stdio.h>
# include <string.h>

int main() {
   char a[12];
   scanf("%s",a);
   int k=3;
   char d[12] = "";
   int s=0;
   for (int i=0; i<12; i++) {
       if (i==3 || i==7) {
           d[i]='-';
        }
        else {
          d[i]=a[s];
          s++;  
        }
   }
   printf("%s",d);
   return 0;
}
           
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
           
	
		
