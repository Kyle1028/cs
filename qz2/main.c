#include <stdio.h>
int rows = 5;

void print_spaces(int r,int rows){
    for (int r=1;r <= rows ; r++){
    printf(" ");
    }
}
void print_stars(int k){
     for(int k=9-(rows*2);k>=1;k--)
   {
    printf("*");
   } 
}
int main(){
    int rows = 5;
    for(int i = 0; i <=rows;i++){
        print_spaces(i);
        print_stars(i);
        printf("\n");
    }
    
    return 0;
}
