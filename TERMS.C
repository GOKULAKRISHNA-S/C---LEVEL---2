#include<stdio.h>
int main ()
{
    int num , terms , sum = 0 , term ;
    printf("ENTER THE NEXT TERM OF THE SEIRES : ");
    scanf("%d",&num);
    printf("ENTER THE NUMBER OF TERMS : ");
    scanf("%d",&terms);
    printf("THE SERIES IS : ");
    for ( int i = 1 ; i <= terms ; i++ )
    {
        term = num * i ;
        printf( "%d",term);
        sum += term ;
        if ( i < terms )
            printf(" , ");
    }
    printf("\n");
    printf("THE SUM IS : %d\n",sum);
    return 0 ;
}