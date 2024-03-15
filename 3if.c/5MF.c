
#include <stdio.h>
int main()
{
   int A,d,AMT;
   char g;
  
   printf("enter a :");
   scanf("%d",&A);
   printf("enter d :");
   scanf("%d",&d);
   printf("enter g :");
   scanf(" %c",&g);
  
   if (A>=18 && A<30)
    {
           if (g=='m')
     	            {
      			AMT=d*700;
      		   	printf("%d",AMT);
      	            }
      				else if (g=='f')
      		    		      {
      					AMT=d*750;
      					printf("%d",AMT);
     		 		      }
    }

           else if (A>=30 && A<=40)
                   {
           		if(g=='m')
            			{
            				AMT=d*800;
          				printf("%d",AMT);
           		        }
                                 else if(g=='f')
                                     {
            				AMT=d*850;
            				printf("%d",AMT);
           	  		     }
    	           }
  	   else{
             printf("Aproprite Age");
               }
   return 0;
}
   
   
