#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year to find leap or not:");
    scanf("%d",&year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d this year is Leap year.",year);
    }
    else
    {
        printf("%d this year is Not a Leap year.",year);
    }
}
