/*
9:41 PM
Thursday, February 4, 2021 (GMT+1)
Time in FOYER menzelABDERAHMEN , BIZERTE , TUNIS
instagram.com/dhiaakaa
 */
 
#include <stdio.h>
// amateurrrr permutation  ! c program #9
int main()
{
    int a = 0 ,b = 0 ,temp = 0 ;
    
    printf("enter a & b : \n");
    scanf("%i%i",&a,&b);
    printf("##############\n##############\n##############\n");
    printf("##############\n#### BEFORE ##\n##############\n");
    printf("##############\n##############\n##############\n");

    printf("a = %i\n",a);
    printf("b = %i\n",b);
    
    
    temp = a;
    
    a = b;
    
    b= temp;
    
    printf("##############\n##############\n##############\n");
    printf("##############\n## AFTER :O ##\n##############\n");
    printf("##############\n##############\n##############\n");
    
    printf("a = %i\n",a);
    printf("b = %i\n",b);
    
    
    return 0;
}
