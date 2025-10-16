#include<stdio.h>
#include<string.h>
int main ()
{
    int rows , cols ;
    char symbol [90] ;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    printf("Enter number of columns : ");
    scanf("%d",&cols);
    printf("Enter symbol : ");
    fgets(symbol,90,stdin);
    symbol[strlen(symbol)-1] = '\0';
    gets(symbol);
    printf("Pattern is : \n");
    for ( int i = 1 ; i <= rows ; i++ )
    {
        for ( int j = 1 ; j <= cols ; j++ )
        {
            printf("%s ",symbol);
        }
        printf("\n");
    }
    return 0;
}