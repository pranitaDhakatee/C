#include<stdio.h>
# include <string.h>
 
int main() {
    int n;
    scanf("%d",&n);
    int arr1[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    char arr2[][13] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    
    char s[13]="";
    for (int i=12; i>=0; i--) {
       int d=(n/arr1[i]);
       if (d!=0) {
          for (int j=0; j<d; j++) {
             strcat(s,arr2[i]);
          }
       }
       n=(n%arr1[i]);
    }
    printf("%s",s);
    return 0;
}
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	



