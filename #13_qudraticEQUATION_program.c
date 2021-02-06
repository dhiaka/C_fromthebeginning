/*
9:41 PM
Thursday, February 4, 2021 (GMT+1)
Time in FOYER menzelABDERAHMEN , BIZERTE , TUNIS
instagram.com/dhiaakaa
 */


#include <stdio.h>
#include <math.h>
//  qudratic EQUATION lol! #13
int main()
{
    float a = 0 , b = 0 , c = 0 , sol1 = 0 , sol2 = 0 , delta = 0 ;
    
    printf("enter these vars : a ,b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("watch out my bro \n");
    printf("############################\n############################\n############################\n");
    printf("############################\n(E1): %.0fX^2 + %.0fX + %.0f\n############################\n",a,b,c);
    printf("############################\n############################\n############################\n");
    
    delta = pow(b,2) - ( 4 * a * c ) ;
    
    printf("\n\n\n\n");
    
    printf("############################\n############################\n############################\n");
    printf("############################\n########## WORKING##########\n############################\n");
    printf("############################\n############################\n############################\n");
    if ( delta > 0 )
    {
        sol1 = ( ( - b + sqrt(delta)) / (2 * a ) );
        sol2 = ( ( - b - sqrt(delta)) / (2 * a ) );
        printf("delta > 0 \n");
        printf("solution 1 = %.2f \n",sol1);
        printf("solution 2 = %.2f \n",sol2);
    }
        else if (delta == 0)
            {
                sol1 = ( -b / (2 * a));
                printf("delta = 0 \n");
                printf("soltuion = %.2f \n",sol1);
            }
                else
                    {
                        printf("NO COMPLEX MODE !!\n");
                        printf("NO SOLUTIONS !!!\n");
                    }
                    
    printf("\n############################\n############################\n############################\n");
    printf("############################\n############################\n############################\n");
    printf("exit. :)");
    
    return 0;
}
