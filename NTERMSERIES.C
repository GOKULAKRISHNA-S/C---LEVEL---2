#include<stdio.h>
int main ()
{
    float num , i , terms , next , sum = 0 ;
    printf("ENTER A NUMBER : ");
    scanf("%f",&num);
    if ( num <= 0 )
    {
        printf("THE SERIES : 0.00\nTHE SUM : 0.00\n");
        return 0 ;
    }
    printf("ENTER THE NUMBER OF TERMS : ");
    scanf("%f",&terms);
    printf("THE NEXT %.0f TERMS OF THE SERIES IS : ",terms);
    for ( i = 1 ; i <= terms ; i++ )
    {
     next = num * i ;
     printf("%.2f",next);
     sum += next ;
     if ( i < terms )
     {
        printf(" , ");
     }
    }
    printf("\nTHE SUM OF THE SERIES : %.2f",sum);


}