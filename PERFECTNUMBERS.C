#include<stdio.h>
int main ()
{
    long long int start , end , i , j , sum = 0 , total = 0 ;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%lld",&start);
    printf("ENTER THE LAST NUMBER : ");
    scanf("%lld",&end);
    if (start < 0 || end <=0 || start>end)
    {
        printf("INVALID INPUT");
        return 0 ;
    }
    printf("THE PERFECT NUMBERS BETWEEN %lld AND %lld ARE : \n",start,end);
    for ( i = start ; i <= end ; i++ )
    {
        if ( i == 0 )
            continue ;
        sum = 0 ;
        for ( j = 1 ; j < i ; j++ )
        {
            if ( i % j == 0 )
            {
                sum = sum + j ;
            }
        }
        if ( i == sum )
        {
            printf("%lld\n",i);
            total = total + i ;
        }
    }
    printf("THE SUM OF PERFECT NUMBERS BETWEEN %lld AND %lld IS : %lld ",start,end,total);
    return 0 ;
}