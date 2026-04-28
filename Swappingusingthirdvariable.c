#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a Two number to swap:");
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d\n",a);
    printf("Before swap b=%d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapped a=%d\n",a);
    printf("After swapped b=%d\n",b);
}