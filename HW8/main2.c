#include <stdio.h>
#include <stdlib.h>
int bitcount();
int main(){
    int x = 0, i;
    i = 15;
    x = bitcount(i);
    printf("%d有%d個1\n\n", i, x);

    return 0;
}
int bitcount (int n)
    {
    int x = 0 ;
    while (n)
    {
    x++ ;
    n &= (n - 1) ; 
    }
    return x ;
}
