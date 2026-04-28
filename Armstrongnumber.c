#include<stdio.h>
int main()
{
    int num1,digiti,sum=0;
    printf("Enter a number :");
    scanf("%d",&num1);
    int num2=num1;
    while(num1!=0)
    {
        digiti=num1%10;
        sum+=digiti*digiti*digiti;
        num1/=10;
        //printf("\n %d",sum);
    }
    if (num2==sum)
    {
        printf("%d is an Armstrong number.",num2);
    }
    else
    {
        printf("%d is not an Armstrong number.",num2);
    }
}