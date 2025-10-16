#include<stdio.h>
int main ()
{
    int year,years,leap=0,nonleap=0;
    printf("ENTER A YEAR : ");
    scanf("%d",&year);
    years = year + 1 ;
    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("%d IS A LEAP YEAR\n",year);
    }
    else 
    {
        printf("%d IS NOT A LEAP YEAR\n",year);
        return 0;
    }
    for (years = year+1 ; years <= year + 10 ; years++ )
    {
      if ((years%4==0 && years%100!=0) || (years%400==0))
      {
      printf("%d\t",years);
      leap++ ;
      }
      else
      {
        printf("%d\t",years);
        nonleap++;
      }
    }
    printf("\nLEAP YEARS = %d\n",leap);
    printf("NON LEAP YEARS = %d\n",nonleap);
    return 0;
}