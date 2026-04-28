#include<stdio.h>
int main()
{
    int num1,num2;
    char ch;
     printf("Enter a two numbers:");
    scanf("%d %d",&num1,&num2);
    while (getchar() != '\n');
     printf("Enter any operator +,-,*,/,%%:");
    scanf("%c",&ch);
    switch(ch)
    {   
        case '+':
           printf("The sum of two number %d",num1+num2);
           break;
        case '-':
           printf("The difference of two number %d",num1-num2);
            break;
        case '*':
           printf("The Multiplication of two number %d",num1*num2); 
            break;
        case '/':
           printf("The Division of two number %d",num1/num2);
            break;
        case '%':
           printf("The Modulas of two number %d",num1%num2);     
            break; 
       default:
            printf("Invalid");    
    }
}   