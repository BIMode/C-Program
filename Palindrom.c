#include<stdio.h>
int main()
{
     int num1,digiti,rev=0;
    printf("Enter a number :");
    scanf("%d",&num1);
    int num2=num1;
    while(num1!=0)
    {  
        digiti=num1%10;
        rev=(rev*10)+digiti;
        num1/=10;
    }
    if(rev==num2)
    {
        printf("%d is a palindrom.",rev);
    }
    else
    {
        printf("%d is not  a palindrom.",rev);
    }
}