#include <stdio.h>
#include<stdlib.h>

int main()
{
     int x , y , i ;
     
    for(x=1 ; x<=19 ; x++)
   {

       if (x % 2 !=0)                              
      {
           for(i=0 ; i<(19-x)/2 ; i++)    
                printf(" ");
           for(y=1 ; y<=x ; y++)       
                printf("*");
      }
      else
           printf("\n");
   }
   printf("\n");
   system("pause");
}
