#include<stdio.h>
int main () 
{
    int first , last , sum = 0 ;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d",&first);
    printf("ENTER THE LAST NUMBER : ");
    scanf("%d",&last);
    for ( int i = first ; i <= last ; i++ )
    {
        printf("CUBE OF %d IS %d\n",i,i*i*i) ;
        sum = sum + (i*i*i) ;
    }
    printf("SUM OF CUBES FROM %d TO %d IS %d\n",first,last,sum); 
}