/*
9:41 PM
Thursday, February 4, 2021 (GMT+1)
Time in FOYER menzelABDERAHMEN , BIZERTE , TUNIS
instagram.com/dhiaakaa
 */
 
#include <stdio.h>
//  congru&modulo ! c program #6
int main()
{
    int d1 = 0 ,d2 = 0 ,q = 0 ,r = 0;
    // d2 nammed divisor
    printf("enter d1 : \n");
    scanf("%i",&d1);
    
    printf("enter d2 : \n");
    scanf("%i",&d2);
    
    q = d1 / d2;
    r = d1 % d2;
    
    printf("%i DIV %i equals to %i \n\n",d1,d2,q);
    printf("%i congrus %i [%i]\n",d1,r,d2);
    
    return 0;
}
