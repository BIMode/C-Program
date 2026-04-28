#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>10 && num<=50)
    {
        printf("%d this number between 10 to 50 range.",num);
    }
    else
    {
         printf("%d this number Not a  between 10 to 50 range.",num);
    }
}