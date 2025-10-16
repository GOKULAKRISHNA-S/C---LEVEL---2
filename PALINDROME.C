#include<stdio.h>
int main ()
{
    long long int num , rev=0 , rem, temp;
    printf("ENTER A NUMBER : ");
    scanf("%lld",&num);
    temp = num;
    while ( num!=0 )
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    printf("REVERSED NUMBER IS : %lld\n",rev);
    if ( rev == temp )
    {
        printf("IT IS A PALINDROME NUMBER\n");
    }
    else
    {
        printf("IT IS NOT A PALINDROME NUMBER\n");
    }
    return 0;
}