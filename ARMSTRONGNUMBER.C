#include<stdio.h>
#include<math.h>
int main ()
{
    long long int number , digit , sum = 0 , count = 0 , temp , num ;
    printf("ENTER THE NUMBER : ");
    scanf("%lld",&number);
    num = number ;
    if ( num <= 0 )
    {
        printf("INVALID INPUT");
        return 0 ;
    }
    count = 0 ;
    while ( num != 0 )
    {
        num = num / 10 ;
        count++ ;
        
    }
    printf("DIGIT OF THE NUMBER : %lld\n",count);
    temp = number ;
    sum = 0 ;
    while ( temp != 0 )
    {
        digit = temp % 10 ;
        sum = sum + round (pow ( digit , count ));
        temp = temp / 10 ;    
    }
    printf("SUM OF THE POWER OF DIGIT : %lld\n",sum);
    if ( number == sum )
        printf("%lld IS ARMSTRONG NUMBER",number);
    else
        printf("%lld IS NOT ARMSTRONG NUMBER",number);     
}