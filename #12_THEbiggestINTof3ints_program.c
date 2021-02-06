/*
9:41 PM
Thursday, February 4, 2021 (GMT+1)
Time in FOYER menzelABDERAHMEN , BIZERTE , TUNIS
instagram.com/dhiaakaa
 */

#include <stdio.h>
//  the big 1 int of 3 int :O ! #12
int main()
{
    int x1,x2,x3;
    
    printf("enter x1 & x2 & x3 \n");
    scanf("%i%i%i",&x1,&x2,&x3);
    
    if(x1 >= x2 && x1 >= x3)
        printf("( x1 = %i ) is the biggest num! :O\n",x1);
            else if(x2 >= x1 && x2 >= x3)
                printf("( x2 = %i ) is the biggest num! :O\n",x2);
                    else if(x3 >= x1 && x3 >= x2)
                        printf("( x3 = %i ) is the biggest num! :O\n",x3);
                        
                        
    return 0;
}
