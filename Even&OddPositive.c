#include<stdio.h>
int main()
{
    int num1;
    printf("Enter a Positive number:");
    scanf("%d",&num1);
    if(num1>0)
    {
        if(num1%2==0)
        {
            printf("%d this number Even Positive.",num1);
        }
        else
        {
            printf("%d this number Odd Positive.",num1);
        }
    }
    else
   {
     printf("Enter a Valid Number.");    
    }
}