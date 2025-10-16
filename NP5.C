#include<stdio.h>
int main ()
{
    int i , j , d , k=1 ;
    for ( i = 6 ; i >= 1 ; i-- )
    {
        for ( j = 1 ; j < i ; j++ )
        {
            printf("  ");
        }
        for ( d = 1 ; d <= k ; d++ )
        {
            printf("%d ",d);
        }
         k++;
                printf("\n");
       
    }
    return 0 ;
}
