#include<stdio.h>
int main()
{
    int num1,digits,sum=0;
    printf("Enter a number :");
    scanf("%d",&num1);
    while(num1!=0)
    {
        digits=num1%10;
        sum+=digits;
        num1/=10;
    }
     printf("The sum of digits is %d",sum);
}