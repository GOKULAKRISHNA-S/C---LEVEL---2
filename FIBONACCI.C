#include<stdio.h>
int main ()
{
    int  num , first = 0 , second = 1  , c ;
    scanf("%d",&num);
    printf("Fibonacci Series: ");
    printf("%d\t%d\t",first,second);
    for ( c = 2 ; c < num ; c++ )
    {
        int next = first + second ;
        printf("%d\t",next);
        first = second ;
        second = next ;
    }
}