#include<stdio.h>
int main ()
{
    int num ;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    if ( num == 0 || num == 1 )
    {
        printf("NEITHER PRIME NOR COMPOSITE\n");
        return 0;
    }
    if (num<0)
    {
        printf("PLEASE ENTER A POSITIVE NUMBER\n");
        return 0 ;
    }
    int prime = 1 ;
    for ( int i = 2 ; i*i<=num ; i++ )
    {
     if ( num % i == 0 )
     {
         prime = 0 ;
         break;
     }
    }
    if ( prime )
    {
        printf("IT IS A PRIME NUMBER\n");
        return 0 ;
    }
    else
    {
        printf("IT IS A COMPOSITE NUMBER\n");
        return 0 ;
    }
    return 0 ;
}