#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter a Two Positive  number:");
    scanf("%d %d", &num1, &num2);
    if (num1 > 0 && num2 > 0)
    {
        printf("%d & %d Both the number Positive.", num1, num2);
    }
    else if (num1 > 0)
    {
        printf("%d this number Positive.", num1);
    }
    else if(num2>0)
    {
        printf("%d this number Positive.", num2);
    }
    else
    {
    printf("%d & %d Both the number Negative.", num1, num2);
    }
}