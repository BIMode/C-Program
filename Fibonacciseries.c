#include <stdio.h>
void Fibonacci(int n) {
    int first = 0, second = 1, next;
    printf("The first %d Fibonacci numbers are:\n", n);
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        Fibonacci(n);
    }
}