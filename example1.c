#include<stdio.h>
int main()
{
int x = 2, y = 5, z = 2;
printf("%d\n", x + y * z);
printf("%d\n", (x + y) * z);
printf("%d\n", x / y * z);
printf("%d\n", y%x );

int x = 5, y = 2;
printf("%d", x > y ? x : y);

int x = 10, y = 3;
printf("%d", x % y == 0 ? x / y : x);

int x = 5, y = 2;
printf("%d\n", x & y);
printf("%d\n", x ^ y);
printf("%d", x | y);

int x = 10, y = 3;
printf("%d", x && y);
printf("%d", x || y);

int a = 10, b = 5, c = 3, d = 4;
printf("%d\n", (a>b && c<d));
printf("%d\n", (a>b || c<d));
printf("%d", !(b==c));

int a = 5, b = 3;
printf("%d", a++ + ++b);
printf("%d", a + b);

int x = 6;
x = x << 1;
printf("%d", x);

int a = 8, b = 3, c = 4;
printf("%d", a > b ? (b > c ? b : c) : a);
}