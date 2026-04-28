#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num!=0)
    {
        if(num%2==0)
        {
            printf("%d this number Even Number.",num);

        }
        else
        {
            printf("%d this number Odd Number.",num);
            
        }
    }
    else
   {
     printf("%d this number is Zero.",num);
            
    }

}