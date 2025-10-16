#include<stdio.h>
int main ()
{
    long long int num ;
    int  count = 0 ;
    printf("ENTER A NUMBER : ");
    scanf("%lld",&num);
    long long int temp = num ;
    if ( num == 0 )
    {
        count = 0 ;
    }
    if ( num < 0 )
    {
        num = -num ;
    }
    while ( num > 0 )
    {
        num = num / 10 ;
        count++ ;
    }
    printf("THE COUNT OF THE %lld IS : %d",temp,count);
}