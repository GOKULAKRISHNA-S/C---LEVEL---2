#include<stdio.h>
#include<math.h>
int main ()
{
    int num , n ;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    int prime = 1 ;
    for ( int i = 2 ; i < num ; i++ )
    {
        if (num%i==0)
        {
          prime = 0 ;
          break ;
        }
    }
     if (prime)
        {
        printf("%d IS A PRIME NUMBER",num);
        }
    else
    {
    printf("%d IS NOT A PRIME NUMBER",num);
    return 0 ;
    }
    for (int i = 1 ; i < num ; i++)
    {
      n = pow(2,i) - 1 ;
     if (n==num)
     {
        printf("\nIT IS A MERSENNE PRIME NUMBER");
        printf("\nMERSENNE NUMBER : ");
        printf("%d\n",num);
        return 0 ;
     }
    }
    if(n!=num)
     {
        printf("\nIT IS A PRIME NUMBER BUT NOT A MERSENNE PRIME NUMBER");
     }
    return 0;
}