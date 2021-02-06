/*
9:41 PM
Thursday, February 4, 2021 (GMT+1)
Time in FOYER menzelABDERAHMEN , BIZERTE , TUNIS
instagram.com/dhiaakaa
 */

#include <stdio.h>
#include <ctype.h>
// consonant or vowel  ! c program #11
int main()
{
    char c;
    int x = 0;
    
    
    printf("enter the character : \n");
    scanf("%c",&c);
    
    c = toupper(c);
    
    x = (( c == 'A')||( c == 'E')||( c == 'I')||( c == 'O')||( c == 'U'));
    
    if( x == 1 )
        printf("%c is a vowel! \n",c);
    else
        printf("%c is a consonant \n",c);
    
    return 0;
}
