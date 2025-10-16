#include<stdio.h>

int main ()
{
    int start , end ;
    scanf("%d %d",&start,&end);
    for ( int i = start ; i <= end-2 ; i++ )
    {
        int prime = 1 ; int primes = 1 ;
        if (i<2) 
        {
        prime = 0 ;
        }
        for ( int j = 2 ; j*j <= i && prime ; j++ )
        {
            if ( i % j == 0 )
            {
              prime = 0 ;
            }
        }
        if (i+2<2)
        {
        primes = 0 ;
        }
        for ( int j = 2 ; j*j <= i+2 && primes ; j++ )
        {
            if ( (i + 2) % j == 0 )
            {
              primes = 0 ;
            }
        }
        if ( prime && primes )
        {
        printf("{%d %d}\n",i,i+2);
        }
    }
}
    

