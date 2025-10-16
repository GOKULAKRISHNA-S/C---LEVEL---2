#include<stdio.h>
int main ()
{
    int num , i ,sum = 0 ;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    if (num <=0)
    {
        printf("INVALID INPUT");
        return 0 ;
    } 
    for (i=1;i<num;i++)
    {
        if (num%i==0)
        {
         sum = sum + i ;
        }
    }
    if (num==sum)
    {
    printf("%d IS A PERFECT NUMBER ",num);
    }
    else
    printf("%d IS NOT A PERFECT NUMBER ",num);
}