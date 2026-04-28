#include <stdio.h>
int main() {
    int num1, num2, gcd, lcm, a, b, temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    a = num1;
    b = num2;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (num1 * num2) / gcd;
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
}
