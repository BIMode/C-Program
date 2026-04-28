#include <stdio.h>
int main()
{
    float a;// implicitly casting
    printf("Enter a number for implicit:");
    scanf("%f", &a);
    int b = a;
    char c = a;
    printf("In float Type:%f\n", a);
    printf("In int Type:%d\n", b);
    printf("In char Type:%c\n", c);
    int x, y;// Explicitily casting
    printf("Enter a tow number for exmplicit:");
    scanf("%d %d", &x, &y);
    float z = (float)x + y;
    printf("Z value of float:%f\n", z);
    char t = (char)x + y;
    printf("Z value of char:%c\n", t);
    unsigned int num;// UnSingned to singined
    printf("Enter a number :");
    scanf("%d", &num);
    signed int number = num;
    printf("signed int is:%u\n", number);
    int f, g;// pre and post increment& decrement
    printf("Enter a number :");
    scanf("%d %d", &f, &g);
    int j = f++ + g;
    int i = ++f + g;
    int k = f-- - g;
    int l = --f - g;
    printf("f++ + g=%d\n", j);
    printf("++f + g=%d\n", i);
    printf("f-- - g=%d\n", j);
    printf("--f - g=%d\n", j);
}