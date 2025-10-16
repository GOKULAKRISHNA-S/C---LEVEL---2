#include<stdio.h>
int main ()
{
    int num , mod , rev = 0 ;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    while(num != 0)
    {
        mod = num % 10 ;
        rev = rev * 10 + mod ;
        num = num / 10 ;
    }

    printf("REVERSED NUMBER IS : %d",rev);    

}