#include<stdio.h>

char main()
{
    char i, n;
    for(i=1;i<=5;i++)
    {
       for(n=1;n<=i;n++)
       {
        printf("*");
        }
     printf("\n");}
     
    for(i=5;i>=1;i--)
    {
       for(n=1;n<=i;n++)
       {
        printf("*");
        }
     printf("\n");}
}