#include<stdio.h>
int main ()
{
    int num , sum = 0 , i ;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    if ( num <=  0 )
    {
        printf("ENTER A VALID INPUT");
        return 0 ;
    }
    for ( i = 1 ; i < num ; i++ )
    {
        if ( num%i==0 )
        {
            printf("%d\t",i);
            sum = sum + i ;
        }
    }
    printf("\nTHE SUM OF THE PROPER DIVISORS OF %d IS : %d\n",num,sum);
    if ( sum > num )
    {
        printf("%d IS AN ABUNDANT NUMBER\n",num);
        int abudance = sum - num ;
        printf("THE ABUNDANCE OF %d IS : %d\n",num,abudance);
        return 0 ;
    }
    else 
    {
        printf("%d IS NOT AN ABUNDANT NUMBER\n",num);
        return 0 ;
    }
}