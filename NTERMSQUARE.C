#include<stdio.h>
int main ()
{
    int n , term , next , i , sum = 0 ;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    if ( n <= 0 )
    {
        printf("INVALID INPUT\n");
        return 0 ;
    }
    sum = ( n*(n+1)*(2*n+1))/6 ; 
    printf("SUM : %d ",sum);
    return 0 ;
}
