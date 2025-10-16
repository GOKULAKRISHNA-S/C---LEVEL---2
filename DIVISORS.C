#include<stdio.h>
int main () 
{
    int num , i , sum = 0;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    if ( num <= 0 ) 
    {
        printf("INVALID INPUT\n");
        return 0 ;
    }
    printf("THE DIVISORS OF %d ARE : \n",num);
    for ( i = 1 ; i < num ; i++ )
    {
        if ( num % i == 0 ) 
        {
            printf("%d\t",i);
            sum = sum + i ;
        }   
    }
    printf("\nTHE SUM OF THE DIVISORS OF %d IS : %d\n",num,sum); 
    if ( num == sum )
        {
            printf("%d IS AN EQUAL NUMBER\n",num);
            return 0;
        }
        else 
        {
            printf("%d IS NOT AN EQUAL NUMBER\n",num);
            return 0;
        }  
}