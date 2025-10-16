#include<stdio.h>
int main ()
{
    int num , next , count = 0 , i ;
    printf("ENTER A POSITIVE INTEGER : ");
    scanf("%d",&num);
    if ( num < 0 )
    {
        printf("PLEASE ENTER A POSITIVE INTEGER\n");
        return 0 ;
    }
    next = num + 1 ;
    if ( num == 0 )
    {
        next = num + 2 ;
    }
    while ( count < 5 )
    {
        int prime = 1 ;
        for ( i = 2 ; i < next ; i++ )
        {
            if (next % i == 0 )
            {
                prime = 0 ;
                break;
            }
        }
        if ( prime )
        {
            printf("%d\t",next);
            count++ ;
        }
        next++ ;
    }
    return 0 ;

}