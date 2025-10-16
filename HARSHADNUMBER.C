#include<stdio.h>
int main ()
{
    int num , sum = 0 , temp ;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    temp = num ;
    if ( num <= 0 )
    {
        printf("ENTER A VALID NUMBER");
        return 0 ;
    }
    while ( num!=0 )
    {
        int digit = num % 10 ;
        sum = sum + digit ;
        num = num / 10 ;
    }
    if ( num % sum == 0 )
    {
        printf("%d IS A HARSHAD NUMBER",temp);
    }
    else
    {
        printf("%d IS NOT A HARSHAD NUMBER",temp);
    }
}