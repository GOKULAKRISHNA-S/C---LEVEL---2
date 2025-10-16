#include<stdio.h>
int main ()
{
    float num , i , sum = 0.0 ;
    printf("ENTER N TERM : ");
    scanf("%f",&num);
    if ( num <= 0 )
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    printf("HARMONIC SERIES : ");
    for ( i = 1 ; i <= num ; i++ )
    {
        sum = sum + ( 1 / i);
        printf("1/%.0f",i);
        if ( i < num )
        {
            printf(" + ");
        }
    }
    printf("\nSUM OF SERIES : %.2f\n",sum);
    return 0;
}