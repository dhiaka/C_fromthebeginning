
/*
1:30 PM
Saturday, February 6, 2021 (GMT+1)
Time in FOYER menzelABDERAHMEN , BIZERTE , TUNIS
 */
 
#include <stdio.h>
//  leap YEAR?!   ! c program #14
int main()
{
    int y;
    
    printf("enter the YEAR bro? :\n");
    scanf("%i",&y);
    
    if(y % 400 == 0 || y % 4 == 0)
        printf("%i is a leap year! \n",y);
            else if(y % 100 == 0)
                printf("%i is not a leap year! \n",y);
                    else
                        printf("%i is not a leap year \n",y);
                        

    return 0;
}
